/*******************************
 * 소프트웨어학부 20171707 차영호
 * Problem :
 *          Haming code
 * *****************************/

#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int checkPariti(int par,int arr[]);

int dataToHaming(long long data,int arr[]){
    int check = 0;
    int idx = 0;
    while(data != 0){
        check++;
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
    return check;
}
void printReal(int haming[]){
    long long sum = 0;
    int onePar = checkPariti(1,haming);
    int twoPar = checkPariti(2,haming);
    int fourPar = checkPariti(4,haming);
    int eightPar = checkPariti(8,haming);
    int sixPar = checkPariti(16,haming);
    if(onePar == 1){haming[30] = 1;}
    if(twoPar == 1){haming[29] = 1;}
    if(fourPar == 1){haming[27] = 1;}
    if(eightPar == 1){haming[23] = 1;}
    if(sixPar == 1){haming[15] = 1;}
    
    for(int i = 0;i<31;i++){
        if(haming[i] == 1){sum+=pow(2,30-i);}
        
    }
    cout << sum << '\n';  
}

int checkPariti(int par,int arr[]){
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
        int reset = 0;
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
void printHaming(int arr[]){
    int square = 35;
    long long sum = 0;
    for(int i = 0;i<36;i++){
        if(i == 0||i == 1||i == 3||i == 7||i == 15||i == 31){continue;}
        else{
            if(arr[i] ==1){
                sum += pow(2,square);
                square--;
            }else{square--;}
        }
    }
    cout << sum << '\n';
}
int main(){
    long long sum = pow(2,2) +pow(2,11) +pow(2,13) +pow(2,14) +
            pow(2,16) +pow(2,17) +pow(2,19) +pow(2,21) +pow(2,22) +pow(2,24) ;
    cout << sum;
    int numTest; cin >> numTest;
    while(numTest--){
        long long k,n; cin >> k >> n;
        if(k == 0){
            int data [31]; 
            fill_n(data,31,0);
            dataToHaming(n,data);
            printReal(data);
        }else{
            int data [36];
            fill_n(data,36,0);
            int flag = dataToHaming(n,data);
            
            
            /*for(int i = 0;i<36;i++){
                cout << data[i] << " ";
            }
            printHaming(data);*/
        }
    }
    //dataToHaming(47367638);
}

//nt main(){

    
    /*int numTest; cin >> numTest;
    while(numTest--){
        int k,n; cin >> k >> n;

    }*/
//}