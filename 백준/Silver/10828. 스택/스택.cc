#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	stack<int> s;
	
	int num;
	string str;
	string ss;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> str;
		if (str == "push") {
			int number;
			cin >> number;
			s.push(number);
		}
		if (str == "top") {
			if (s.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << s.top() << endl;
		}
		if (str == "size") {
			cout << s.size() << endl;
		}
		if (str == "empty") {
			if (s.empty() == true) cout << true << endl;
			else cout << false << endl;
		}
		if (str == "pop") {
			if (s.empty()) {
				cout << -1 << endl;
				continue;
			}
			cout << s.top() << endl;
			s.pop();
		}
	}

}