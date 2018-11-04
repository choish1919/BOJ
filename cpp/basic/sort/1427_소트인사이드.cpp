#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int count[10] = { 0, };
	for (char &c : s) count[c - '0']++;
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < count[i]; j++) cout << i;
	}
	cout << endl;

	return 0;
}