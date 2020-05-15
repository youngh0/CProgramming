/*******************************
 * 소프트웨어학부 20171707 차영호
 * Problem :
 *          Haming code
 * *****************************/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int checkPariti(int par,int arr[]){   //check pariti bit
    int count = 0;
    if(par == 1){
        for(int i = 30;i>=2;i-=2){       
            if(arr[30-i] == 1){
                count++;
            }
        }
        return count%2;
    }
    else{
        int reset = 0; // flag of uncheck, if equal reset and par that will jump index as int par
        for(int i = 30;i > par - 1;i--){
            if(reset != par){
                if(arr[30-i] == 1){
                    count++;
                    reset++;
                }else{reset++;}
            }else{
                reset = 0;
                i -= (par-1);
            }
        }
        return count % 2;
    } 
}

void dataToHaming(long long data,int arr[]){ // when k = 0, call this method for revise value 'n' to 31-bit array 
    int idx = 0;
    while(data != 0){
        if(idx == 0 ||idx == 1 ||idx == 3 ||idx == 7 ||idx == 15){
            idx++;continue;
        }
        else{
            if(data%2 == 1){
            arr[idx] = 1;
            }
            idx++; data/=2;
        }
    }
    reverse(arr,arr+31);  
}
void hamingToData(long long data,int arr[]){ // when k = 1, call this method for revise haming code 'n' to array
    int square = 30; // if n is greater than 2^square, arr[i] = 1 and n -= 2^square
    for(int i = 0;i<31;i++){
        if(data == pow(2,square)){
            arr[i] = 1;
            break;
        }else if(data > pow(2,square)){
            arr[i] = 1;
            data -= pow(2,square);
            square--;
        }else{square--;}
    }
    //when finish this loop, we will get 31-bit array
    // and we should find error in main method line 123~...
}
void printReal(int arr[]){ // when k = 0, call this method for print result
    long long sum = 0;
    int parritBit [5];
    for(int i = 0;i<5;i++){
        parritBit[i] = checkPariti(pow(2,i),arr);
    }
    // line 76~80 : revise value of pariti bit
    if(parritBit[0] == 1){arr[30] = 1;}
    if(parritBit[1]== 1){arr[29] = 1;}
    if(parritBit[2] == 1){arr[27] = 1;}
    if(parritBit[3] == 1){arr[23] = 1;}
    if(parritBit[4] == 1){arr[15] = 1;}
    for(int i = 0;i<31;i++){
        if(arr[i] == 1){sum+=pow(2,30-i);}    
    }
    cout << sum << '\n';  
}

void printHaming(int arr[]){ // when k = 1, call this method for print result
    long long sum = 0;
    int data[26]; // real data array 26-bit
    fill_n(data,26,0);
    int idx = 0;
    for(int i = 0;i<31;i++){ // copy arr to data while except paritibit
        if(i == 30 || i == 29 || i == 27 || i == 23 || i == 15){continue;} // ignore paritibit
        else{
            data[idx] = arr[i];
            idx++;
        }
    }
    //when ending 93~99 loop, data array will be right binary
    for(int i = 0;i<26;i++){
        if(data[i] == 1){sum += pow(2,25-i);}
    }
    cout << sum;
    cout << '\n';
}
int main(){
    int numTest; cin >> numTest;
    while(numTest--){
        long long k,n; cin >> k >> n;
        if(k == 0){
            int data [31]; 
            fill_n(data,31,0);
            dataToHaming(n,data);
            printReal(data);
        }else{
            int pariti [5]; // repository paiti bit      
            int error = 0; // check where wrong index
            int data [31]; // make 31-bit haming
            fill_n(data,31,0);
            hamingToData(n,data);
            // line 123 ~ 127 : save pariti bit of original array
            for(int i = 0;i<5;i++){
                pariti[i] = checkPariti(pow(2,i),data);
            }
            // line 129 ~ 133 : compare between 
            if(pariti[0] != data[30]){error++;}
            if(pariti[1] != data[29]){error+=2;}
            if(pariti[2] != data[27]){error+=4;}
            if(pariti[3] != data[23]){error+=8;}
            if(pariti[4] != data[15]){error+=16;}
            // reverse error index
            if(error != 0 && data[31-error] == 0){data[31-error]=1;}
            else if(error != 0 && data[31-error] == 1){data[31-error]=0;}
            printHaming(data);  
        }
    }
}
