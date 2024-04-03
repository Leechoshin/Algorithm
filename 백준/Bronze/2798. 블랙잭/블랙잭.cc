#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int card_num;
	int num_add, Max;
	int Most = 0;
	cin >> card_num >> num_add;
	vector<int> arr(card_num);

	for (int i = 0; i < card_num; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < card_num - 2; i++) {
		for (int j = i + 1; j < card_num - 1; j++) {
			for (int k = j + 1; k < card_num; k++) {
				Max = arr[i] + arr[j] + arr[k];
				if (Most<=Max && Max <= num_add) {
					Most = Max;
				}
				else continue;
			}
		}
	}
	cout << Most;
}