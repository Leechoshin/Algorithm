#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	int num;
	cin >> num;

	while (num--) {
		stack<char> s;
		string line;
		cin >> line;

		for (int i = 0; i < line.length(); i++) {
			if (s.empty()) {
				s.push(line[i]);
			}
			// 여기는 (,) 짝을 찾아주기 위해 스택에서 pop을 하는 것인데 코드 구현을 몰라서 찾아서 작성
			// line[i]가 닫는 괄호 ) 일 때 스택 top에 여는 괄호 ( 이것이 존재하면 서로 짝으로 구성하여 pop
			else if (line[i] == ')' && s.top() == '(') {
				s.pop();
			}
			else 
				s.push(line[i]);
		}

		if (s.empty()) {
			cout << "YES" << endl;
		}
		else
			cout << "NO" << endl;
	}
}