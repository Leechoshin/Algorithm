#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	
	while(1) {
		cin >> str;
		if (str == "0") {
			return 0;
		}
		if (str.size() % 2 == 1) {
			string compare1 = str.substr(0, str.size() / 2);
			string compare2 = str.substr(str.size() / 2 + 1);
			reverse(compare2.begin(), compare2.end());
			if (compare1 == compare2) {
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
		else {
			string compare1 = str.substr(0, str.size() / 2);
			string compare2 = str.substr(str.size() / 2);
			reverse(compare2.begin(), compare2.end());
			if (compare1 == compare2) {
				cout << "yes" << endl;
			}
			else cout << "no" << endl;
		}
	}
}