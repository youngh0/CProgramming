#include<iostream>
using namespace std;

int main() {
	int numTestCase;
	cin >> numTestCase;

	for (int i = 0; i < numTestCase; i++) {
		int num;
		int mul;
		int result = 1;
		cin >> num;
		for (int cycle = 0; cycle < num; cycle++) {
			cin >> mul;
			mul %= 10;
			result *= mul;
			result %= 10;
		}
		cout << result % 10;
		cout << endl;
	}

}
