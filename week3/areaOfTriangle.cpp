/************************************************************
20171707 차영호
Problem:
		삼각형면적
************************************************************/

#include<iostream>
using namespace std;

int triangleArea(int x1, int y1, int x2, int y2, int x3, int y3) { //삼격형 면적구하는 메소드
	return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main() {
	int numTest;
	cin >> numTest;
	for (int cycle = 0; cycle < numTest; cycle++) {
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int area = triangleArea(x1, y1, x2, y2, x3, y3);
		if (area > 0) cout << area << " " << 1 << endl;				//면적이 양수일때
		else if (area < 0) cout << area * -1 << " " << -1 << endl;	//면적이 음수일때
		else cout << 0 << " " << 0 << endl;							//면적이 0일 때
	}
	return 0;
}