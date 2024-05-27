#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num, add, order;
	deque <int> v;
	cin >> num;

	for (int i = 0; i < num; i++) {
		cin >> order;
		if (order == 1) {
			cin >> add;
			v.push_front(add);
		}
		else if (order == 2) {
			cin >> add;
			v.push_back(add);
		}
		else if (order == 3) {
			if (v.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << v.front() << "\n";
			v.pop_front();
		}
		else if (order == 4) {
			if (v.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << v.back() << "\n";
			v.pop_back();
		}
		else if (order == 5) {
			cout << v.size() << "\n";
		}
		else if (order == 6) {
			if (v.empty()) {
				cout << 1 << "\n";
				continue;
			}
			cout << 0 << "\n";
		}
		else if (order == 7) {
			if (v.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << v.front() << "\n";
		}
		else if (order == 8) {
			if (v.empty()) {
				cout << -1 << "\n";
				continue;
			}
			cout << v.back() << "\n";
		}
	}
}