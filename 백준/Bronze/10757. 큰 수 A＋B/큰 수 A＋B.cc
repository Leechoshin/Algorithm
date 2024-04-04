#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	//구글링 참고 했습니다.
	string num1, num2;
	cin >> num1 >> num2;
	
	// 입력 받은 2개의 숫자들의 길이
	int num1length = num1.length();
	int num2length = num2.length();

	// 항상 앞 자리의 수가 더 크게 만들게 한다.
	if (num2length > num1length) {
		swap(num1, num2);
		swap(num1length, num2length);
	}

	// 2개의 숫자들의 자릿수 맞추기
	string tmp = "";
	if (num1length != num2length) {
		for (int i = 0; i < (num1length - num2length); i++)
			tmp += "0";
	}
	num2 = tmp + num2;

	// 뒷자리부터 합을 answer에 추가
	string ans = "";
	int carry = 0;
	int x, y, digit; // 자리수
	for (int i = num1length - 1; i >= 0; i--) {
		x = num1[i] - '0'; // 숫자로 변환
		y = num2[i] - '0'; // 숫자로 변환
		digit = x + y; // 합
		if (carry == 1) { // 다음 합 때 carry가 1이면 자리수 +1을 하고 carry를 0으로 만든다.
			digit++;
			carry = 0;
		}
		if (digit > 9) // 10이 넘어가면 carry에 1을 할당하고 digit을 10으로 나누고 숫자로 변환 
			carry = 1;
		ans += digit % 10 + '0'; // ex) digit이 18 이면 carry =1 ans= ans+ 8
	}
	if (carry == 1)
		ans += "1"; // 마지막에 추가 될 수 있는 한 자리 ex) 500+500=1000

	for (int i = ans.length()-1; i >= 0; i--) {
		cout << ans[i];
	}
}
