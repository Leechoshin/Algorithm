#include <iostream>
using namespace std;

int main() {
	int stu_num, score, big, small;
	int array[1000];
	cin >> stu_num;
	if (stu_num == 2) {
		for (int i = 0; i < 2; i++) {
			cin >> score;
			array[i] = score;
		}
		if (array[0] > array[1]) cout << array[0] - array[1];
		else cout << array[1] - array[0];
		return 0;
	}
	
	for (int i = 0; i < stu_num; i++) {
		cin >> score;
		array[i] = score;
	}

	if (array[0] > array[1]) {
		big = array[0];
		small = array[1];
	}
	else {
		big = array[1];
		small = array[0];
	}

	for (int i = 2; i < stu_num; i++) {

		if (big < array[i]) big = array[i];
		if (array[i] < small) small = array[i];
	}
	cout << big-small;
    
    return 0;
}