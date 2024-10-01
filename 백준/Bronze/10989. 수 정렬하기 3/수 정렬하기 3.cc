#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n, num;
	cin >> n;
	
	int array[10001] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> num;
		array[num - 1]++;
	}

	for (int num=1; num < 10001; num++) {
		while (array[num - 1] != 0) {
			cout << num << '\n';
			array[num - 1]--;
		}
	}
	
}