#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	map<int, int> A;
	int M;
	int number;
	string word;

	cin >> M;
	
	while (M != 0) {
		cin >> word;

		// Add
		if (word == "add") {
			cin >> number;
			if (A.find(number) == A.end()) {
				A.insert({ number, number });
			}
		}

		// Remove
		else if (word == "remove") {
			cin >> number;
			if (A.find(number) != A.end()) {
				A.erase(number);
			}
		}

		// Check
		else if (word == "check") {
			cin >> number;
			if (A.find(number) != A.end()) {
				cout << 1 << '\n';
			}
			else cout << 0 << '\n';
		}

		// Toggle
		else if (word == "toggle") {
			cin >> number;
			if (A.find(number) != A.end()) {
				A.erase(number);
			}
			else {
				A.insert({ number,number });
			}
		}

		// All
		else if (word == "all") {
			for(int i=1;i<21;i++){
				A.insert({ i,i });
			}
		}

		// Empty
		else if (word == "empty") {
			A.clear();
		}

		M--;
	}
	// 위 문제는 처음에 벡터를 사용했다가 HashMap을 사용해서 풀었습니다.

}
