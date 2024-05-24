#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
	int person, leave;
	cin >> person >> leave;
	queue <int> q;
	for (int i = 0; i < person; i++) {
		q.push(i + 1);
	}

	//원형 큐 구현 [방법을 도저히 모르겠어서 구글링 검색]
	//큐를 생성하고 q.front()를 큐의 마지막에 push하게 되면 큐를 유지하면서도 원형 큐를 만들 수 있게 된다는 것을 알게 됨.
	//queue를 생성 후 제거 하고자 하는 leave번째의 원소를 큐 맨 앞에 오도록 설정
	
	// 여기부터 구글링
	cout << "<";
	while (q.empty() != true) {
		for (int i = 0; i < leave - 1; i++) {
			q.push(q.front()); //맨 앞의 원소를 큐의 마지막에 push함
			q.pop(); // 맨 앞의 원소를 pop
		}
		cout << q.front(); // 이러면 leave번째 원소가 큐의 맨 앞으로 오게 됨
		q.pop(); // leave번째 원소 pop
		if (q.empty() != true) {
			cout << ", "; // 큐가 empty가 아니면 ,를 출력 (형식 맞추기)
		}
	}
	cout << ">";
}
// 처음에는 벡터로 풀려고 했지만 큐를 사용해야 한다는 것을 알게 되었다. 또한 원형 큐를 유지하기 위해 첫번째 원소를 마지막에 push하는 방법도 알게 되었다.