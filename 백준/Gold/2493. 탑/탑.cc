#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int Tower[500001];
int Accept_Tower[500001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N, number;
	cin >> N;
	// 수신되는 타워를 입력받을 stack T
	stack<pair<int,int>> T;
	// Tower 배열에 number(타워 높이) 삽입
	for (int i = 0; i < N; i++) {
		cin >> number;
		Tower[i] = number;
	}

	// 오큰수 개념과 마찬가지로 monostack 사용
	for (int i = 0; i < N; i++) {
		// T stack이 비지않고 T stack의 top().first 값과 Tower[i]를 비교
		while (!T.empty() && T.top().first <= Tower[i]) {
			// Tower[i]가 클 경우
			T.pop();
		}
		// T stack이 빈 경우 ( 수신되는 타워가 없을 때 )
		if (T.empty() == true) {
			Accept_Tower[i] = 0;
		}
		// 수신되는 타워의 index를 Accept_Tower 배열에 삽입
		else {
			Accept_Tower[i] = T.top().second+1;
		}
		// 비교한 타워를 T stack에 삽입 (높이와 인덱스)
		T.push(make_pair(Tower[i], i));
	}
	// 수신되는 타워들의 인덱스 출력
	for (int i = 0; i < N; i++) {
		cout << Accept_Tower[i] << " ";
	}

}