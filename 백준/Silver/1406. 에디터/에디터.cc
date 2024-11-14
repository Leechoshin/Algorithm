#include <iostream>
#include <algorithm>
#include <list>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	// 연결리스트, 문자열, 입력할 명령어 수, 명령어
	string sentence;
	char order_text; // P 입력시 삽입할 문자
	string order;
	int order_num;

	// 문자열 입력 + 명령수 입력
	cin >> sentence;
	cin >> order_num;
	list<char> L;

	// 입력받은 문자열 연결리스트에 삽입
	for (auto c : sentence) L.push_back(c);

	// iterator cursor(커서)
	list<char>::iterator cursor = L.end();
	

	while (order_num > 0) {
		// 명령 입력
		cin >> order;

		// 명령이 L일 경우
		if (order == "L" && (cursor != L.begin())) {
			if (cursor == L.begin()) {
				continue;
			}
			cursor--;
		}

		// 명령이 D일 경우
		else if (order == "D" && (cursor != L.end())) {
			if (cursor == L.end()) {
				continue;
			}
			cursor++;
		}

		// 명령이 B일 경우
		else if (order == "B" && (cursor != L.begin())) {
			cursor--;
			cursor = L.erase(cursor);

		}

		// 명령이 P일 경우
		else if (order == "P") {
			cin >> order_text;
			L.insert(cursor,order_text);
		}

		order_num--;
	}

	// list L 출력
	for (cursor=L.begin();cursor!=L.end();cursor++){
		cout << *cursor;
	}

	return 0;
}