/*****************************************
20171707 ����ȣ
Problem:
		�簢���� ������ �Ÿ�
*****************************************/

#include<iostream>
using namespace std;

int main() {
	int numTest;
	cin >> numTest;
	for (int cycle = 0; cycle < numTest; cycle++) {
		int x1, y1, x2, y2, px, py;
		cin >> x1 >> y1 >> x2 >> y2 >> px >> py;
		
		if (((x1 <= px) && (px <= x2)) && ((y1 <= py) && (py <= y2)))
			cout << 0 << " " << 0 << endl;
		else {
			if (((x1 <= px) && (px <= x2)) &&(py > y2)) 		//�߰� ��
				cout << (py - y2) * (py - y2)<< " " << py - y2 << endl;

			else if (((x1 <= px) && (px <= x2)) && (py < y1)) 	//�߰� �Ʒ�
				cout << (y1 - py) * (y1 - py)<< " " << y1 - py << endl;
			
			else if ((y1 <= py) && (py <= y2) && (px > x2))		//������ �߰�
				cout << (px - x2) * (px - x2)<< " " << px - x2 << endl;
			
			else if ((y1 <= py) && (py <= y2) && (px < x1)) 	//���� �߰�
				cout << (x1 - px) * (x1 - px)<< " " << x1 - px << endl;
			
			else if ((px > x2) && (py > y2)) 					//������ ��
				cout << ((px - x2) * (px - x2)) + ((py - y2) * (py - y2)) << " " << ((x2 - px) * -1) + ((y2 - py) * -1) << endl;
			
			else if ((px < x1) && (py > y2)) 					//���� ��
				cout << ((px - x1) * (px - x1)) + ((py - y2) * (py - y2)) << " " << (x1 - px) + ((y2 - py) * -1) <<endl;
			
			else if ((px < x1) && (py < y1)) {					//���� �Ʒ�
				cout << ((px - x1) * (px - x1)) + ((py - y1) * (py - y1)) << " " << (x1 - px) + (y1 - py) << endl;
			}
			else if ((px > x2) && (py < y1)) {					//������ �Ʒ�
				cout << ((px - x2) * (px - x2)) + ((py - y1) * (py - y1)) << " " << ((x2 - px) * -1) + (y1 - py) << endl;
			}
		}
	}
}