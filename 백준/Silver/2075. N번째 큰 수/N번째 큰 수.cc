#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// N, number, 우선 순위 큐 pq
	int N;
	int number;
	priority_queue<int, vector<int>, greater<int>> pq; // 최대 힙

	// N값 입력받기
	cin >> N;
	
	// N*N표 이므로 i를 N*N번까지 올라가면서 pq에 number 삽입
	for (int i = 0; i < N*N; i++) {
		cin >> number;
		pq.push(number);
		// pq의 size가 N보다 커질 경우 가장 위에 있는 수를 pop
		// 이걸 수행하게 되면 N번째 입력이 끝난 후에는 pq.top()에는 N번째 큰 수 값
		if (pq.size() > N) {
			pq.pop();
		}
	}
	
	// N번째로 큰 수 출력
	cout << pq.top();
	
}