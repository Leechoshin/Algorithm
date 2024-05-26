#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int num, integer, count=0, sum = 0;
	cin >> num;
	vector<int> v;
	for (int i = 0; i < num; i++) {
		cin >> integer;
		v.push_back(integer);
	}
	sort(v.begin(), v.end());
	cin >> sum;
	
	int first = 0;
	int end = v.size() - 1;

	while (1) {
		if (first == end) {
			break;
		}
		if (sum == v[first] + v[end]) {
			count++;
			end--;
			continue;
		}
		if (sum > v[first] + v[end]) {
			first++;
			continue;
		}
		if (sum < v[first] + v[end]) {
			end--;
			continue;
		}
	}
	cout << count;
}