#include <iostream>
using namespace std;

int main() {
	int num, add;
	int count = 0;
	int first_array[2];
	int array[2];
	int new_array[2];

	cin >> num;
	if (num < 10) {
		array[0] = 0;
		array[1] = num;
	}
	else {
		array[0] = num / 10;
		array[1] = num % 10;
	}
	first_array[0] = array[0];
	first_array[1] = array[1];
	while (1) {

		add = array[0] + array[1];

		new_array[0] = array[1];
		new_array[1] = add % 10;

		count++;

		if ((first_array[0]==new_array[0]) && (first_array[1]==new_array[1])) {
			break;
		}
			array[0] = new_array[0];
			array[1] = new_array[1];
	}

	cout << count;
	
}