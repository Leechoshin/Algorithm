#include <iostream>
using namespace std;

int main() {
	int num, win1, win2, cost1, cost2;
	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> win1 >> win2;
		{
			if (win1 == 1) cost1 = 5000000;
			else if (win1 <= 3 && win1 >= 2) cost1 = 3000000;
			else if (win1 <= 6 && win1 >= 4)cost1 = 2000000;
			else if (win1 <= 10 && win1 >= 7)cost1 = 500000;
			else if (win1 <= 15 && win1 >= 11)cost1 = 300000;
			else if (win1 <= 21 && win1 >= 16) cost1 = 100000;
			else cost1 = 0;
		}
		{
			if (win2 == 1)cost2 = 5120000;
			else if (win2 <= 3 && win2 >= 2)cost2 = 2560000;
			else if (win2 <= 7 && win2 >= 4)cost2 = 1280000;
			else if (win2 <= 15 && win2 >= 8)cost2 = 640000;
			else if (win2 <= 31 && win2 >= 16)cost2 = 320000;
			else cost2 = 0;
		}
		cout << cost1 + cost2 << endl;
	}
}