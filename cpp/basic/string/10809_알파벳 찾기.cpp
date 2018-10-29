#include <iostream>
#include <string>

using namespace std;

int main() {
	int ans[26];
	fill_n(ans, 26, -1);
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++) {
		if (ans[s[i] - 'a'] == -1) ans[s[i] - 'a'] = i; 
	}
	for (int &i : ans) { cout << i << ' '; }

	return 0;
}