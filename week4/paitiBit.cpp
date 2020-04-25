/******************************************
20171707 차영호
Problem:
        패리티비트
*******************************************/
#include <iostream>
#include<cmath>
using namespace std;

int calculate(int bit) {
    int prime = bit;
    int count = 0;
    unsigned int sum = 0;
    while (prime != 0) {
        if (prime % 2 == 1) {
            count++;
            prime /= 2;
        }
        else
            prime /= 2;
    }
    if (count % 2 == 1) {
        sum += bit + pow(2, 31);
        return sum;
    }
    else
        return bit;
}
int main() {
    int numTest;
    cin >> numTest;
    while (numTest--) {
        int n;
        cin >> n;
        unsigned int sum = calculate(n);
        cout << sum << endl;
    }
    return 0;
}