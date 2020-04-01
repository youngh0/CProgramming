#include<iostream>
using namespace std;

int main() {
	int numTest,data;
	cin >> numTest;
	
	
	for (int i = 0; i < numTest; i++) {
		cin >> data;	//삼각형 크기
		int count = 1;  //한 열당 반복되는 횟수를 나타내는 변수
		for (int low = 1; low < data + 1; low++) {
			cout << low <<" ";
			int plus = data - 1; //열은 low에 data-1을 더한 뒤 plus변수 - 1 만큼 계속 더해주는 방식임
			int result = low + plus; //더하기 전의 열 들을 저장하는 변수
			for (int col = 1; col < count; col++) {
				cout << result<<" ";
				plus--;
				result += plus; //바로 전 숫자에 plus-1을 더해줌.
			}count++; //한 열이 끝나면 열이 반복되는 count변수에 +1 을 해서 
					  //다음행은 열이한 번더 반복되게 함.
			cout << endl;
		}
	}
	
	
	
}

