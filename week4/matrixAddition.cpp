/************************************************
20171707Â÷¿µÈ£
Problem:
		Çà·Äµ¡¼À
*************************************************/

#include<iostream>
using namespace std;
int main() {
	int row, col, numTest;
	cin >> numTest;
	while (numTest--) {
		cin >> row >> col;
		int arr1[100][100];
		int arr2[100][100];

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				int n;
				cin >> n;
				arr1[i][j] = n;
			}
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				int n;
				cin >> n;
				arr2[i][j] = n;
			}
		}
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				cout << arr1[i][j] + arr2[i][j] << " ";
			}cout << endl;
		}

	}


}