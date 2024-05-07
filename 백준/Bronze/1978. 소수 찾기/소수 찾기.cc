#include <iostream>
#include <algorithm>

using namespace std;

int Find_decimal(int num) {
	int decimal, check=0, count = 0;
	for (int i = 0; i < num; i++) {
		cin >> decimal;
		for (int i = 1; i <= decimal; i++) {
			if (decimal % i == 0) {
				check++;
			}
		}
		if (check == 2) {
			count++;
		}
		check = 0;
	}
	return count;
}

int main() {
	int num;
	cin >> num;
	cout << Find_decimal(num);
}