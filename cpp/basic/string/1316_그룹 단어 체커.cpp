#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n--) {
		string s;
		cin >> s;
		bool cnt[26] = { 0, };
		char last;
		bool isGroupWord = true;
		for (char &c : s) {
			if (cnt[c - 'a'] == 1 && last != c) {
				isGroupWord = false;
				break;
			}
			cnt[c - 'a'] = 1;
			last = c;
		}
		if (isGroupWord) ans++;
	}

	cout << ans << endl;

	return 0;
}