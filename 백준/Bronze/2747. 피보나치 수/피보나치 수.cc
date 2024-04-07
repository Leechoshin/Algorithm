#include <iostream>
using namespace std;

int main() {
	int num, find_fi=0;
	int array[45];

	cin >> num;
	if (num > 45) return 0;
	array[0] = 0;
	array[1] = 1;
	
	for (int i = 2; i <= num; i++) {
		array[i] = array[i - 2] + array[i - 1];
	}
	cout << array[num];
}