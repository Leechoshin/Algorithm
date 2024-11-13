#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

//이분 탐색을 사용하는 문제
int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 집의 개수, 공유기 개수, 좌표, 최대 거리
	int house, wifi, number;
	int length = 0;
	// 집의 좌표를 넣을 vector v
	vector<int> v;
	cin >> house >> wifi;

	// 집의 좌표를 입력 받아 vector v에 삽입
	for (int i = 0; i < house; i++) {
		cin >> number;
		v.push_back(number);
	}

	// 좌표가 들어간 벡터 정렬
	sort(v.begin(), v.end());

	// 집들 사이의 최소 거리를 1, 최대 거리를 v[house-1]-v[0]으로 초기화
	int start = 1;
	int end = v[house - 1] - v[0]; //종점끼리의 거리

	// 예전에 사용했던 이분 탐색 코드를 참고 해봤습니다.
	// 여기부터는 구글링을 참고 했습니다.
	// 이분 탐색
	while (end >= start) {
		int mid = (start + end) / 2;
		//시작점에는 공유기를 설치 한다고 가정
		int wifi_count = 1;
		// 첫번째 index에 들어있는 좌표를 compare로 초기화
		int compare = v[0];

		// v[i]와 compare의 차이가 mid값보다 크거나 같으면 공유기 수를 증가시키고
		// compare의 값을 v[i]로 초기화
		for (int i = 1; i < house; i++) {
			if (v[i] - compare >= mid) {
				wifi_count++;
				compare = v[i];
			}
		}
		// for문을 마치면 공유기의 수 나오게 됨.
		
		// 공유기의 수가 처음 입력된 공유기의 수보다 많은 경우는 start=mid+1로 하고 다시 while문 수행
		if (wifi_count >= wifi) {
			// 인접한 공유기의 최대 거리를 구해야 하므로 max 함수를 사용
			length = max(length, mid);
			start = mid + 1;
		}
		// 공유기의 수가 처음 입력된 공유기의 수보다 적은 경우는 end = mid -1을 하고 다시 while문 수행
		else
			end = mid - 1;
	}

	// while문 종료 후 나온 length가 인접한 공유기 사이의 최대 거리
	cout << length;
}