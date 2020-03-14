#include<iostream>
using namespace std;

int main() {
    int numTestCase;
    cin >> numTestCase;

    for (int i = 0; i < numTestCase; i++) {
        int num;
        int mul;
        int result = 1.0;
        cin >> num;
        for (int cycle = 0; cycle < num; cycle++) {
            cin >> mul;
            result *= mul;
            result %= 10;
        }
        cout << long(result % 10);

    }

}