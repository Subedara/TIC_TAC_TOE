#include <iostream>

#include <string>
#include <vector>
using namespace std;

void rendergame(vector<string> f, vector<string> s, vector<string> t) {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 0) {
				if (j == 2) {
					cout << f[j];
					break;
				} else {
					cout << f[j] << " | ";
				}
			} else if (i == 1) {
				if (j == 2) {
					cout << s[j];
					break;
				} else {
					cout << s[j] << " | ";
				}
			} else {
				if (j == 2) {
					cout << t[j];
					break;
				} else {
					cout << t[j] << " | ";
				}
			}
		}
		cout << "\n";
		if (i == 2) {
			break;
		} else {
			for (int x = 0; x < 9; x++) {
				cout << "-";
			}
			cout << "\n";
		}
	}
	cout << "\n";
}

int main() {
	vector<string> firstl = {"1", "2", "3"};
	vector<string> secondl = {"4", "5", "6"};
	vector<string> thirdl = {"7", "8", "9"};
	while (true) {
		int res = 0;
		rendergame(firstl, secondl, thirdl);
		cout << "Which move will you do? ";
		cin >> res;
		cout << "\n";
		if (res == 10) {
			break;
		} else {
			switch (res) {
				case 1:
					firstl[0] = "X";
					break;
				case 2:
					firstl[1] = "X";
					break;
				case 3:
					firstl[2] = "X";
					break;
				case 4:
					secondl[0] = "X";
					break;
				case 5:
					secondl[1] = "X";
					break;
				case 6:
					secondl[2] = "X";
					break;
				case 7:
					thirdl[0] = "X";
					break;
				case 8:
					thirdl[1] = "X";
					break;
				case 9:
					thirdl[2] = "X";
					break;
			}
		}
	}
	return 0;
}