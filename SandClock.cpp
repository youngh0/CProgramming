#include<iostream>
using namespace std;

int main() {
    int TestCase;
    cin >> TestCase;

    for (int i = 0; i < TestCase; i++) {
        int data,count = 0;
        int upperCount = 1;
        cin >> data;

        for (int row = 0; row < data; row++) {
            if (count == 0) {
                for (int i = 0; i < data / 2; i++) {
                    cout << "*+";
                }cout << "*" << endl;
                count++;
            }
            else if (count != data / 2) {
                for (int frontMinus = 0; frontMinus < count; frontMinus++) 
                    cout << "-";
                for (int mix = 0; mix < data / 2 - count; mix++) 
                    cout << "*+";
                cout << "*";
                for (int backMinus = 0; backMinus < count; backMinus++) 
                    cout << "-";
                if (upperCount != data / 2) {
                    count++;
                    upperCount++;
                }
                else 
                    count--;
                cout << endl;
            }
            else {
                for (int frontMinus = 0; frontMinus < count; frontMinus++) {
                    cout << "-";
                }cout << "*";
                for (int backMinus = 0; backMinus < count; backMinus++) 
                    cout << "-";
                cout << endl;
                count--;
            }
        }
    }
}