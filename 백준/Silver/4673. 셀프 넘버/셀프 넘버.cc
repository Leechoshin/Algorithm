#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int Pop_NonSelfNumber(int num) {
	int n=0;
	if (num < 10) {
		n = num + num;
	}
	else if (num >= 10 && num < 100) {
		int First = num / 10;
		int Second = num - (First * 10);
		n = num + First + Second;
	}
	else if (num >= 100 && num < 1000) {
		int First = num / 100;
		int Second = (num - First * 100) / 10;
		int Third = (num - First * 100 - Second * 10);
		n = num + First + Second + Third;
	}
	else if (num >= 1000 && num <= 10000) {
		int First = num / 1000;
		int Second = (num - First * 1000) / 100;
		int Third = (num - First * 1000 - Second * 100) / 10;
		int Fourth = (num - First * 1000 - Second * 100 - Third * 10);
		n = num + First + Second + Third + Fourth;
	}
	return n;
}

int main() {
	vector<int> v;
	int num = 1;
	for (int i = 0; i < 10000; i++) {
		v.push_back(i + 1);
	}
	while (num < 10000) {
		v.erase(remove(v.begin(), v.end(), Pop_NonSelfNumber(num)), v.end());
		num++;
	}

	vector<int> :: iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++) {
		cout << *iter << endl;
	}
}