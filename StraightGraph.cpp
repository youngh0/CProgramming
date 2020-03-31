#include <iostream>
using namespace std;

int main() {
	int numTestCase;
	cin >> numTestCase;

	for (int i = 0; i < numTestCase; i++) {
		int data, count;
		cin >> data;
		count = data - 1;

		for (int low = 0; low < data; low++) {
			if (low == data / 2) {
				for (int specialCase = 0; specialCase < data; specialCase++) {
					if (specialCase == data / 2) {
						cout << 'O';
					}
					else {
						cout << '+';
					}
				}
			}
			for (int col = 0; col < data; col++) {
				if (low == data / 2) {
				}
				else if (count == col) {
					cout << '*';
				}
				else if (col == data / 2) {
					cout << 'I';
				}
				else {
					cout << '.';
				}
			}count--;
			cout << endl;
		}
	}
	return 0;
}