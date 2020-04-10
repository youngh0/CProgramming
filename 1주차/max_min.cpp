/*
    problen:
            최대/최소 구하기

*/



#include <iostream>
using namespace std;

int main() {
    int numTestCase;

    cin >> numTestCase;

    for (int i = 0; i < numTestCase; i++) {
        int cycle, data;
        cin >> cycle;
        int min, max;
        cin >> data;
        min = max = data;
        for (int j = 0; j < cycle - 1; j++) {
            cin >> data;
            if (data <= min) {
                min = data;
            }
            if (data >= max) {
                max = data;
            }
        }
        cout << max << " " << min << endl;
    }
}