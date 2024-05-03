#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void BinarySearch() {
	long n, m, num;
	vector<int> arr1;
	// 초기에는 벡터 2개를 생성하여 하나씩 비교 하려 했지만
	// 그냥 입력 받은 수를 key로 정하고 하나의 벡터에서 탐색하기 위해 벡터 하나 삭제
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		arr1.push_back(num);
	}

	// 이진 탐색을 하기 전에 벡터 정렬
	sort(arr1.begin(), arr1.end());

	// m개의 수를 입력 받고 num을 입력 받아 이진 탐색 함수 매개변수로 사용
	cin >> m;
	for (int i = 0; i < m; i++) {
		long key;
		cin >> key;
		int find = 0; // key 값을 찾으면 1을 만들어 마지막 if 문 수행에 사용
		long low = 0;
		long high = arr1.size() - 1;

		while (high >= low) {
			long mid = (low + high) / 2;
			if (arr1[mid] == key) {
				cout << 1 << '\n';
				find++;
				break;
			}
			else if (arr1[mid] < key) {
				low = mid + 1;
			}
			else high = mid - 1;
		}
		if(find!=1) cout << 0 << '\n';
	}
	// 이진 탐색 방법 구현
	// 탐색을 할 때마다 low와 high를 갱신 해야 하는데 for문 말고 while문으로 구현해야 하는 것을 몰랐음.
	// while문 탈출을 위해 return 사용
	// 구글 검색 사용
}

int main() {
	//시간 초과일 때 사용 하라는 명령문?
	ios_base::sync_with_stdio(false); 
	cin.tie(0);
	cout.tie(0);

	BinarySearch();
}
