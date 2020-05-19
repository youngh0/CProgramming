/**********************************
소프트웨어학부 20171707 차영호
Problem:
		괄호
**********************************/
#include<iostream>
#include<vector>
using namespace std;

int main() {
	int numTest;
	cin >> numTest;

	while (numTest--) {
		vector<char> stack;
		string exp;
		
		int result = 1;
		cin >> exp;
		for (int i = 0; i < exp.length(); i++) {
			if (exp[i] == '(' || exp[i] == '[' || exp[i] == '{') {
				stack.push_back(exp[i]);
				continue;
			}
			else if (exp[i] == ']' && stack.size() != 0 && stack.back() == '[') {
				stack.pop_back();
				continue;
			}
			else if (exp[i] == ')' && stack.size() != 0 && stack.back() == '(') {
				stack.pop_back();
				continue;
			}
			else if (exp[i] == '}' && stack.size() != 0 && stack.back() == '{') {
				stack.pop_back();
				continue;
			}
			else {
				result = 0;
				break;
			}
		}
		if (stack.size() != 0)
			result = 0;
		cout << result << endl;
	}
	return 0;
}