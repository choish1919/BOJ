#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 0;
	for (char &c : s) {
		if (65 <= c) {
			if (c <= 67) ans += 2;
			else if (c <= 70) ans += 3;
			else if (c <= 73) ans += 4;
			else if (c <= 76) ans += 5;
			else if (c <= 79) ans += 6;
			else if (c <= 83) ans += 7;
			else if (c <= 86) ans += 8;
			else if (c <= 90) ans += 9;
		}
	}
	cout << ans+s.size() << endl;

	return 0;
}