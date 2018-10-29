#include <iostream>
#include <string>

using namespace std;

int main() {
	string ans = "mixed";
	int a[8];
	

	for (int i = 0; i < 8; i++) {
		cin >> a[i];
	}

	bool check = false;
	for (int i = 0; i < 8; i++) {
		if (a[i] != i + 1) check = true;
	}
	if (!check) ans = "ascending";

	bool check2 = false;
	for (int i = 0; i < 8; i++) {
		if (a[i] != 8 - i) check2 = true;
	}
	if (!check2) ans = "descending";

	cout << ans << endl;

	return 0;
}