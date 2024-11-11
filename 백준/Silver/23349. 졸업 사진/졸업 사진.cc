#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string,int> p1, pair<string,int> p2) {
	if (p1.first == p2.first) {
		return p1.second < p2.second;
	}
	return p1.first < p2.first;
}

int main() {
	int num = 0;
	int big = 0;
	int start_time;
	int end_time;
	string place;
	string name;
	set<string> name_check;
	map<pair<string, int>, int> range;
	vector<pair<string, int>> V;

	cin >> num;
	while (num--) {
		cin >> name;
		cin >> place;
		cin >> start_time;
		cin >> end_time;

		if (name_check.find(name) != name_check.end()) {
			continue;
		}
		name_check.insert(name);

		// 장소*전체 시간
		for (int i = start_time; i < end_time; i++) {
			range[make_pair(place, i)]++;
		}
	}

	// 최댓값
	for (auto it = range.begin(); it != range.end(); it++) {
		if (big < it->second) {
			big = it->second;
		}
	}

	for (auto it = range.begin(); it != range.end(); it++) {
		if (it->second == big) {
			V.push_back(it->first);
		}
	}

	sort(V.begin(), V.end(), compare);

	int last = V.begin()->second;

	for (auto it = V.begin() + 1; it != V.end(); it++) {
		if (V.begin()->first == it->first && it->second == last +1) {
			last = it->second;
		}
	}

	cout << V.begin()->first << " " << V.begin()->second << " " << last+1;
}