#include <iostream>
#include <algorithm>
using namespace std;

int Find(int KG) {
	int count = 0;
	while (KG >= 0) {
		if (KG % 5 == 0) {
			count += (KG / 5);
			break;
		}
		KG -= 3;
		count++;
	}
	if (KG < 0) {
		return -1;
	}
	
	return count;
}

int main() {
	int KG;
	cin >> KG;
	cout << Find(KG);
}