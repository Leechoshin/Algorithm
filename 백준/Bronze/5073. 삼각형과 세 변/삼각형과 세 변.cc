#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	int t1, t2, t3;
	vector<int> triangle;

	while (true) {
		cin >> t1 >> t2 >> t3;
		if (t1 == 0 && t2 == 0 && t3 == 0) break;
		triangle.push_back(t1);
		triangle.push_back(t2);
		triangle.push_back(t3);

		sort(triangle.begin(), triangle.end());

		if (triangle[2] < (t1 + t2 + t3 - triangle[2])) {

			if (t1 == t2 && t1 == t3 && t2 == t3) {
				cout << "Equilateral" << endl;
			}

			else if (t1 != t2 && t2 != t3 && t1 != t3) {
				cout << "Scalene" << endl;
			}
			else if ((t1 == t2 && t1 != t3 && t2 != t3) || (t1 == t3 && t2 != t3 && t2 != t1) || (t2 == t3 && t2 != t1 && t3 != t1)) {
				cout << "Isosceles" << endl;
			}
		}

		else cout << "Invalid" << endl;

		triangle.clear();

	}

		return 0;
}