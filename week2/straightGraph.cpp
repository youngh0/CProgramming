/*#include <iostream>
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




/**************************************************
*	problem: 			                           *
*			두 정수 사이의 모든 정수 합 구하기     *
*												   *
***************************************************/

/*#include <iostream>
using namespace std;

int main() {
	int numTestCase;
	cin >> numTestCase;


	for (int i = 0; i < numTestCase; i++) {
		int first = 0;;
		int last = 0;
		int sum = 0;
		cin >> first;
		cin >> last;
		sum = first;
		for (int j = first + 1; j <= last; j++) {
			sum += j;
		}
		cout << sum << endl;
	}
}

/**************************************************
*	problem: 			                           *
*			두 정수 사이의 모든 정수 합 구하기     *
*												   *
***************************************************/

/*#include <iostream>
using namespace std;

int main() {
	int numTestCase;
	cin >> numTestCase;


	for (int i = 0; i < numTestCase; i++) {
		int first = 0;;
		int last = 0;
		int sum = 0;
		cin >> first;
		cin >> last;
		sum = first;
		for (int j = first + 1; j <= last; j++) {
			sum += j;
		}
		cout << sum << endl;
	}*/

#include <iostream>
using namespace std;
int main(void)
{
	int numtestcase;
	cin >> numtestcase;
	for (int i = 0; i < numtestcase; i++) {
		int numdata;
		int data;
		int sum = 0;
		cin >> numdata;
		for (int j = 0; j < numdata; j++) {
			cin >> data;
			sum += data;
		}
		cout << sum << endl;

	}
	return 0;

}