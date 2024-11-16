#include <iostream>
#include <algorithm>
#include <string>
#include <unordered_map>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 입력 받을 문자열;
	string sentence;
	// 쪼갠 문장을 받을 문자열
	string subs1;
	// hash_map hm 
	unordered_map<string,int> hm;
	int count = 1;
	// hash_map hm에서 사용할 value값
	int number = 0;
	// hash_map에 key가 있는지 없는지 확인하기 위해 사용
	bool check;


	// 문자열 입력
	cin >> sentence;
	

	// 서로 다른 부분 문자열 찾기
	while(count <= sentence.size()){
		// 만들 수 있는 모든 부분 문자열 
		for (int i = 0; i < sentence.size(); i++) {
			subs1 = sentence.substr(i, count);
			// subs1의 문자열 길이가 count보다 짧으면 X
			if (subs1.size() < count) {
				continue;
			}

			// hash_map에 존재하는 subs1이면 삽입 X
			if (hm.find(subs1) == hm.end()) {
				check = false;
			}

			// 서로 다르면서 중복이지 않은 subs1은 hash_map에 삽입
			if (check = true) {
				number++;
				hm.insert(make_pair(subs1,number));
			}
		}

		count++;
	}

	// 서로 다른 부분 문자열의 개수 출력
	cout << hm.size();

	return 0;
}