/**************************************************
*	problem: 			                           *
*			�� ���� ������ ��� ���� �� ���ϱ�     *
*												   *
***************************************************/

#include <iostream>
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