/*********************************************
20171707 차영호
Problem:
		삼각형의 종류 - 1
*********************************************/


/*정삼각형은 삼각형의 세 변의 길이가
모두 같은 삼각형이며, 직각삼각형은 삼각형의 하나의 각이 직각인 경우이며, 이등변삼각형은 두 변
의 길이만 같은 삼각형이다.그 나머지 형태는 일반삼각형이다.참고로, 한 변의 길이가 다른 두 변
의 길이의 합보다 크거나 같은 삼각형은 존재하지 않는다.*/
#include<iostream>
using namespace std;

int main() {
	int numTest;
	cin >> numTest;
	for (int cycle = 0; cycle < numTest; cycle++) {
		int a, b, c;
		cin >> a >> b >> c;
		if ((a >= (b + c)) || (b >= (a + c)) || (c >= (a + b)))
			cout << 0 << endl;
		else if ((a == b) && (b == c))
			cout << 1 << endl;
		else if (((a * a) == b * b + c * 2) || ((b * b) == a * a + c * c) || ((c * c) == a * a + b * b))
			cout << 2 << endl;
		else if (((a == b) && a != c) || ((a == c) && a != b) || ((b == c) && b != a))
			cout << 3 << endl;
		else
			cout << 4 << endl;
	}
}