#include<iostream>
using namespace std;

int main() {
    int TestCase;
    cin >> TestCase;

    for (int i = 0; i < TestCase; i++) {
        int data;
        int count = 0;
        cin >> data;
        int cycle = data / 2;
        for (int row = 0; row < cycle + 1; row++) {
            if (count == 0) {
                for (int i = 0; i < cycle; i++) {
                    cout << "*+";
                }cout << "*" << endl;
                count++;
            }
            else if (count != cycle) {
                for (int frontMinus = 0; frontMinus < count; frontMinus++) {
                    cout << "-";
                }for (int mix = 0; mix < cycle - count; mix++) {
                    cout << "*+";
                }cout << "*";
                for (int backMinus = 0; backMinus < count; backMinus++) {
                    cout << "-";
                }count++;
                cout << endl;
            }
            else {
                for (int firstMinus = 0; firstMinus < count; firstMinus++) {
                    cout << "-";
                }cout << "*";
                for (int backMinus = 0; backMinus < count; backMinus++) {
                    cout << "-";
                }
                cout << endl;
                count--;
            }
        }for (int row = 0; row < cycle; row++) {
            if (count == 0) {
                for (int i = 0; i < cycle; i++) {
                    cout << "*+";
                }cout << "*" << endl;
            }
            else if (count != cycle) {
                for (int frontMinus = 0; frontMinus < count; frontMinus++) {
                    cout << "-";
                }for (int mix = 0; mix < cycle - count; mix++) {
                    cout << "*+";
                }cout << "*";
                for (int backMinus = 0; backMinus < count; backMinus++) {
                    cout << "-";
                }
                count--;
                cout << endl;
            }
        }
    }
}