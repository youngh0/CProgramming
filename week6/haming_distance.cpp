/********************************************
소프트웨어학부 20171707 차영호
Problem: 
	해밍거리
*********************************************/

#include<iostream>
using namespace std;

int binary(int value[], int data) {
	int count = 0;
	int haming_weight = 0;
	while (data != 0) {
		
		if (data % 2 == 1) {
			value[30 - count] = 1;
			haming_weight++;
		}
		data /= 2;
		count++;
	}
	return haming_weight;
}
int check_distance(int value[], int value1[]) {
	int check = 0;
	for (int i = 0; i < 31; i++) {
		if (value[i] != value1[i]) {
			check++;
		}
	}
	return check;
}


int main() {
	int numTest; cin >> numTest;
	while (numTest--) {
		int arr1[31];
		int arr2[31];
		fill_n(arr1, 31, 0);
		fill_n(arr2, 31, 0);
		int first, second; cin >> first >> second;
		int first_weight = binary(arr1, first);
		int second_weight =  binary(arr2, second);
		int distance = check_distance(arr1, arr2);
		
		cout << first_weight << " " << second_weight  << " " << distance  << '\n';
	}
	
}