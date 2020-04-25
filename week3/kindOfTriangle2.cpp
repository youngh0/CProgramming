/**********************************************
20171707 차영호
Problem:
		삼각형의 종류 - 2
***********************************************/

#include<iostream>
using namespace std;

int triangle(int len1, int len2, int len3) {
	if (len2 + len3 == len1)
		return 1;
	else if (len2 + len3 < len1)
		return 2;
	else
		return 3;
}
int main() {
	int numTest;
	cin >> numTest;
	for (int cycle = 0; cycle < numTest; cycle++) {
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int line1, line2, line3;
		line1 = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
		line2 = (x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1);
		line3 = (x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2);

		if ((y2 - y1) * (x3 - x2) == (x2 - x1) * (y3 - y2))
			cout << 0 << endl;
		else {
			if (line1 >= line2 && line1 >= line3) {
				cout << triangle(line1, line2, line3) << endl;
			}
			else if (line2 >= line1 && line2 >= line3)
				cout << triangle(line2, line1, line3) << endl;
			else
				cout << triangle(line3, line1, line2) << endl;
		}
		
	}
}


/*#include <iostream>
#include <cmath>
using namespace std;
int result(int& a, int& b, int& c) {
	if (a + b == c) return 1;
	else if (a + b < c) return 2;
	else return 3;
}

int main() {
	int testCase;
	cin >> testCase;
	int a1, a2, b1, b2, c1, c2;
	for (int i = 0; i < testCase; i++) {
		cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
		int lenA, lenB, lenC;

		lenA = pow(b1 - a1, 2) + pow(b2 - a2, 2);
		lenB = pow(c1 - a1, 2) + pow(c2 - a2, 2);
		lenC = pow(b1 - c1, 2) + pow(b2 - c2, 2);

		if (((b2 - a2) * (c1 - b1)) == ((b1 - a1) * (c2 - b2))) {
			cout << 0 << endl;
		}
		else {
			if (lenA >= lenB && lenA >= lenC) {
				cout << result(lenB, lenC, lenA) << endl;
			}
			else if (lenB >= lenA && lenB >= lenC) {
				cout << result(lenA, lenC, lenB) << endl;
			}
			else {
				cout << result(lenA, lenB, lenC) << endl;
			}
		}
	}
	return 0;
}*/