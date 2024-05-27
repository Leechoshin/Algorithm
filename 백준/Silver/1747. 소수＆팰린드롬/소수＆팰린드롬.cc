#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool CheckPalin(int num) {
	bool tf=true;
	string check = to_string(num);
	for (int i = 0; i < check.size(); i++) {
		if (check[i] != check[check.size() - 1 - i]) {
			tf = false;
			break;
		}
	}
	return tf;
}

bool CheckDecimal(int num) {
	bool tf;
	int count = 0;
	while (1) {
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				count++;
			}
		}
		if (count == 2) {
			tf = true;
			break;
		}
		else {
			tf = false;
			break;
		}
	}
	return tf;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num;
	cin >> num;
	while (1) {
		if (CheckPalin(num) && CheckDecimal(num) == true) {
			cout << num;
			break;
		}
		num++;
	}
}