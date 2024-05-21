#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int person, time, sum = 0,count = 0;
	vector<int> v;
	cin >> person;
	for (int i = 0; i < person; i++) {
		cin >> time;
		v.push_back(time);
	}

	sort(v.begin(), v.end());
	while (count != v.size()) {
		for (int i = 0; i <= count; i++) {
			sum += v[i];
		}
		count++;
	}
	cout << sum;
}