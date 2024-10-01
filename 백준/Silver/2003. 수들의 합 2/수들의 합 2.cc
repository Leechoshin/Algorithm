#include <iostream>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); 
	cout.tie(0);

	int n, m, num, sum;
	int count = 0;
	cin >> n >> m;
	vector<int> v;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}
	for (int i = 0; i < n; i++) {
		sum = v[i];
		if (sum == m) {
			count++;
			continue;
		}
		for (int j = i + 1; j < n; j++) {
			sum += v[j];
			if (sum == m) {
				count++;
				break;
			}
			else if (sum > m) {
				break;
			}
		}
	}
	cout << count;
}