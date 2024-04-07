#include <iostream>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if (A > 6 || B > 6 || C > 6) { return 0; }

	if ((A == B && A == C)){
		cout<<10000+A*1000;
	}
	else if (A != B && B!= C && A!=C) {
		if (A > B && A > C) {
			cout << A * 100;
		}
		else if (B > A && B > C) {
			cout << B * 100;
		}
		else cout << C * 100;
	}
	else {
		if (A == B && A!= C) {
			cout << 1000 + A * 100;
		}
		else if (A != B && B == C) {
			cout << 1000 + B * 100;
		}
		else if (C==A && C!=B)cout << 1000 + C * 100;
	}

	return 0;
}