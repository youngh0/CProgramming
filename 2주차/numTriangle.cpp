#include<iostream>
using namespace std;

int main() {
	int numTest,data;
	cin >> numTest;
	
	
	for (int i = 0; i < numTest; i++) {
		cin >> data;	//�ﰢ�� ũ��
		int count = 1;  //�� ���� �ݺ��Ǵ� Ƚ���� ��Ÿ���� ����
		for (int low = 1; low < data + 1; low++) {
			cout << low <<" ";
			int plus = data - 1; //���� low�� data-1�� ���� �� plus���� - 1 ��ŭ ��� �����ִ� �����
			int result = low + plus; //���ϱ� ���� �� ���� �����ϴ� ����
			for (int col = 1; col < count; col++) {
				cout << result<<" ";
				plus--;
				result += plus; //�ٷ� �� ���ڿ� plus-1�� ������.
			}count++; //�� ���� ������ ���� �ݺ��Ǵ� count������ +1 �� �ؼ� 
					  //�������� ������ ���� �ݺ��ǰ� ��.
			cout << endl;
		}
	}
	
	
	
}

