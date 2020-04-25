/****************************************
20171707 차영호
Problem : 수평 수직 교차 검사
************************************************/

#include<iostream>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		int x1, y1, x2, y2;
		int secX1, secY1, secX2, secY2;
		
		cin >> x1 >> y1 >> x2 >> y2 >> secX1 >> secY1 >> secX2 >> secY2;
		if (y1 == y2) {      //처음 주어진게 수평선분
			if ((((x1 == secX1) || (x2 == secX2)) && (((secY1 <= y1) && (y1 <= secY2)) || ((secY2 <= y1) && (y1 <= secY1)))) ||
				(((y1 == secY1) || (y1 == secY2)) && (((x1 <= secX1) && (secX1 <= x2)) || ((x2 <= secX1) && (secX1 <= x1))))
				)
				cout << 2 << endl;
			else if ((((secY1 < y1) && (y1 < secY2)) || ((secY2 < y1) && (y1 < secY1))) &&
				(((x1 < secX1) && (secX1 < x2)) || ((x2 < secX1) && (secX1 < x1))))
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}
		else if (x1 == x2) {   //처음 주어진게 수직선분	
			if (((y1 == secY1) || (y2 == secY1)) && (((secX1 <= x1) && (x1 <= secX2)) || ((secX2 <= x1) && (x1 <= secX1))) ||
				((x1 == secX1) || (x1 == secX2)) && (((y1 <= secY1) && (secY1 <= y2)) || ((y2 <= secY1) && (secY1 <= y1))))
				cout << 2 << endl;
			else if ((((secX1 < x1) && (x1 < secX2)) || ((secX2 < x1) && (x1 < secX1))) &&
				((y1 < secY1) && (secY1 < y2)) || ((y2 < secY1) && (secY1 < y1)))
				cout << 1 << endl;
			else
				cout << 0 << endl;
		}	
	}
}
