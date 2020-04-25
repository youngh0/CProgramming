/********************************
20171707차영호
Problem:
		다각형 면적
********************************/
#include<iostream>
using namespace std;

int calArea(int a[], int b[], int cycle) {
	int first = 0;
	int last = 0;
	for (int i = 0; i < cycle; i++) {
		first += a[i] * b[i + 1];
		last += b[i] * a[i + 1];
	}
	return first - last;
}

int main() {
	int numTest;
	cin >> numTest;
	while (numTest--) {
		int numPoint;
		cin >> numPoint;
		int xList[100];
		int yList[100];
		for (int i = 0; i < numPoint; i++) {
			int x, y;
			cin >> x >> y;
			xList[i] = x; yList[i] = y;
		}
		xList[numPoint] = xList[0];
		yList[numPoint] = yList[0];
		int area = calArea(xList, yList, numPoint);

		int result = (area < 0) ? -1 : 1;
		cout << abs(area) << " " << result << endl;
	}
}