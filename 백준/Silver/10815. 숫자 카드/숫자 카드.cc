#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> v;

void Check_num(int num) {
	int low = 0;
	int high = v.size()-1;
	int check = 0;
	while (high>=low) {
		int mid = (low + high) / 2;
		if (v[mid] == num) {
			check++;
			cout << 1 << ' ';
			break;
		}
		else if (v[mid] > num) {
			high = mid - 1;
		}
		else low = mid + 1;

	}
	if (check == 0) {
		cout << 0 << ' ';
	}
	return;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, m, num;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		Check_num(num);
	}
}
