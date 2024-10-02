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
	// 최빈값은 구글링을 통해 참고했습니다.
	int count[8001] = { 0 };
	for (int i = 0; i < num; i++) {
		if (v[i] >= 0) {
			count[int(v[i])]++; // 0 이상의 수
		}
		else {
			count[int(fabs(v[i])) + 4000]++; // 음수일 경우
		}
	} // 벡터에 들어있는 수들의 개수를 저장해놓은 count 배열

	int max = 0; // count 배열에서 가장 큰 최빈값을 찾기 위해 max 변수 설정
	// 배열을 돌면서 max 값을 찾기
	for (int i = 0; i < 8001; i++) {
		if (max < count[i]) {
			max = count[i];
		}
	}
	vector<int> Find_Mode; // 어떤 수가 max 최빈값과 동일한지 저장하는 Find_Mode 벡터
	for (int i = 0; i < 8001; i++) {
		if (max == count[i]) {
			if (i <= 4000) { // count[i]의 수가 양수일 경우
				Find_Mode.push_back(i);
			}
			else { // count[i]의 수가 음수일 경우
				Find_Mode.push_back((i - 4000) * (-1));
			}
		}
	}
	sort(Find_Mode.begin(), Find_Mode.end()); // Find_Mode 벡터를 정렬
	// Find_Mode 벡터를 정렬하게 되면 가장 큰 최빈값을 가지는 값들이 내림차순으로 정렬됨
	// 가장 큰 최빈값을 가지는 값이 하나인 경우
	if (Find_Mode.size() == 1) {
		cout << Find_Mode[0] << '\n'; // Find_Mode 벡터의 index가 0인 값 출력
	}
	// 가장 큰 최빈값을 가지는 값이 2개 이상인 경우
	else {
		cout << Find_Mode[1] << '\n'; // Find_Mode 벡터의 index가 1인 값 출력
	}
	

	// 범위 구하기
	cout << v[num - 1] - v[0];

}