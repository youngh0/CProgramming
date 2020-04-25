/************************************************************
20171707 ����ȣ
Problem:
		�ﰢ������
************************************************************/

#include<iostream>
using namespace std;

int triangleArea(int x1, int y1, int x2, int y2, int x3, int y3) { //����� �������ϴ� �޼ҵ�
	return (x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1);
}

int main() {
	int numTest;
	cin >> numTest;
	for (int cycle = 0; cycle < numTest; cycle++) {
		int x1, y1, x2, y2, x3, y3;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int area = triangleArea(x1, y1, x2, y2, x3, y3);
		if (area > 0) cout << area << " " << 1 << endl;				//������ ����϶�
		else if (area < 0) cout << area * -1 << " " << -1 << endl;	//������ �����϶�
		else cout << 0 << " " << 0 << endl;							//������ 0�� ��
	}
	return 0;
}