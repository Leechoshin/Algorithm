#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	queue<int> q;
	string order;
	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> order;
		if (order == "push") {
			int num;
			cin >> num;
			q.push(num);
		}

		else if (order == "front") {
			if (q.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << q.front() << endl;
		}
		else if (order == "back") {
			if (q.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << q.back() << endl;
		}
		else if (order == "size") {
			cout << q.size() << endl;
		}
		else if (order == "empty") {
			if (q.size() == 0) {
				cout << 1 << endl;
			}
			else cout << 0 << endl;
		}

		else if (order == "pop") {
			if (q.size() == 0) {
				cout << -1 << endl;
				continue;
			}
			cout << q.front() << endl;
			q.pop();
			
		}
	}
}