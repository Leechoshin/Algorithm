#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int money;
	int cost;
	cin >> money;

	cost = 1000 - money;
	int count = 0;
	while (cost) {
		if (cost >= 500) {
			cost=cost - 500;
			count++;
		}
		else if (cost >= 100 && cost < 500) {
			cost = cost - 100;
			count++;
		}
		else if (cost >= 50 && cost < 100) {
			cost = cost - 50;
			count++;
		}
		else if (cost >= 10 && cost < 50) {
			cost = cost - 10;
			count++;
		}
		else if (cost >= 5 && cost < 10) {
			cost = cost - 5;
			count++;
		}
		else if (cost >= 1 && cost < 10) {
			cost = cost - 1;
			count++;
		}
	}
	cout << count;
}