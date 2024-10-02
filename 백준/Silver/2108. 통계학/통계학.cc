#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int num, n;
	double sum = 0;
	double avg;
	vector<int> v;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	// 벡터 정렬
	for (int i = 0; i < num ; i++) {
		sum += v[i];
	}
	// 산술 평균 구하기
	avg = sum / v.size();
	if (avg >= 0) {
		if (avg - (int)avg >= 0.5) {
			cout << (int)avg + 1 << '\n';
		}
		else {
			cout << (int)avg << '\n';
		}
	}
	else {
		if ((int)avg - avg >= 0.5) {
			cout << (int)avg - 1 << '\n';
		}
		else {
			cout << (int)avg << '\n';
		}
	}

	// 중앙값 구하기
	cout << v[num / 2] << '\n';

	// 최빈값 구하기
	int count[8001] = { 0 };
	for (int i = 0; i < num; i++) {
		if (v[i] >= 0) {
			count[int(v[i])]++; // 0 이상의 수
		}
		else {
			count[int(fabs(v[i])) + 4000]++; // 음수일 경우
		}
	} // 벡터에 들어있는 수들의 개수를 저장해놓은 count 배열

	int max = 0;
	for (int i = 0; i < 8001; i++) {
		if (max < count[i]) {
			max = count[i];
		}
	}
	vector<int> Find_Mode;
	for (int i = 0; i < 8001; i++) {
		if (max == count[i]) {
			if (i <= 4000) {
				Find_Mode.push_back(i);
			}
			else {
				Find_Mode.push_back((i - 4000) * (-1));
			}
		}
	}
	sort(Find_Mode.begin(), Find_Mode.end());

	if (Find_Mode.size() == 1) {
		cout << Find_Mode[0] << '\n';
	}
	else {
		cout << Find_Mode[1] << '\n';
	}
	

	// 범위 구하기
	cout << v[num - 1] - v[0];
}