#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	long max, add = 0, num = 0;
	cin >> max;

	while (1){
		num++;
		add = add + num;
		if (max < add) {
			num--;
			break;
		}
	}
	cout << num;
}