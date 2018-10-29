#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt[26] = { 0, };
	int mx = 0;
	int mxIdx = 0;
	char ans;
	for (int i = 0; i < s.size(); i++) {
		if (97 <= s[i] && s[i] <= 122) s[i] -= 32;
		cnt[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		if (mx < cnt[i]) {
			mx = cnt[i];
			mxIdx = i;
		}
	}
	int scnt = -1;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] == mx) scnt++;
	}

	if (scnt >= 1) ans = '?';
	else ans = mxIdx + 65;

	cout << ans << endl;

	return 0;
}