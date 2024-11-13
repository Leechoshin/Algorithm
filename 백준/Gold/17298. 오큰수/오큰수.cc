#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

// Stack A 
stack<int> A;
// 2개의 배열 생성
int N1[1000001];
int N2[1000001];

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);


	// 수열 A의 크기
	int count;
	cin >> count;

	// N1 배열에 순열을 입력
	for (int i = 0; i < count; i++) {
		cin >> N1[i];
	}
	// 스택을 구현해서 풀려다가 접근 방식을 모르겠어서 구글링을 참고 했습니다.
	// 저는 배열에 수열을 집어넣고 첫번째 index부터 끝까지 탐색하는 방법을 구현하려고 했지만
	// 수열의 마지막부터 스택에 집어넣는 방식을 사용해서 풀이하겠습니다.

	for (int i = count - 1; i >= 0; i--) {
		// A stack이 비어있지 않고 N1[i]이 A.top()보다 크거나 같으면 오큰수가 아니므로 A stack에서 pop
		while (!A.empty() && A.top() <= N1[i]) {
			A.pop();
		}
		// A stack이 비었으면 오큰수가 존재하지 않는 수이므로 N2[i]에 -1을 넣습니다.
		if (A.empty() == true) {
			N2[i] = -1;
		}
		// A.top()에 있는 값이 오큰수 이므로 N2[i]에 A.top()값을 할당
		else {
			N2[i] = A.top();
		}
		// 이 부분을 몰랐는데 A.push(N1[i])를 하지 않으면 stack이 계속 비어있는 경우가 발생하게 되므로 push를 해줘야 된다고
		// 생각했습니다. ex(9688) -> push를 하지 않으면 -1 8 -1 -1이 나와야 하는데 -1 -1 -1 -1이라는 다른 값이 나오게 됩니다.
		// 그리고 제가 생각한 것은 N1[i]보다 큰 수들만 스택에 넣었는데 스택이 끝까지 연산되기 전에 앞에서 emtpy()가 true가 되면
		// 연산이 불가능해지므로 안되는 것을 알게 되었습니다.
		A.push(N1[i]);
	}
	
	// N2 배열이 NGE가 들어있는 배열
	for (int i = 0; i < count; i++) {
		cout << N2[i] << " ";
	}

	return 0;
	
}
