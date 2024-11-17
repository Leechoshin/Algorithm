#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 나무 이름, map tree, 총 입력된 나무 개수
	string tree_name;
	map<string, double> tree;
	double tree_count = 0;

	// 입력 조건 (영문 대소문자, 공백문자, 숫자, 특수문자가 아닐 경우 종료)
	while (getline(cin, tree_name)) // (구글링 참고)  
	{
		// 나무 종류가 입력 될 때마다 tree_count 증가
		tree_count++;

		// map tree에 같은 종류의 나무가 존재하면 그 나무의 value 값을 증가
		if (tree.find(tree_name) != tree.end()) {
			tree[tree_name] += 1;
		}

		else {
			// map tree에 같은 종류의 나무가 없을 경우 map tree에 삽입
			tree[tree_name] = 1;
		}
	}

	// 소수 4째 자리까지 출력 (구글링 참고)
	cout << fixed;
	cout.precision(4);

	// 총 존재하는 나무 종의 이름을 사전 순으로 출력 + 종의 비율을 백분율로 소수점 4째자리까지 반올림해서 출력
	for (auto it = tree.begin(); it != tree.end(); it++) {
		cout << it->first << " " << (it->second / tree_count) * 100 << endl;
	}

	return 0;
}