#include <iostream>
#include <string>

using namespace std;

int cnt = 0;

void solve(int n) {
	string s = to_string(n);
	int diff = (s[0]-'0') - (s[1]-'0');
	for (int i = 1; i < s.size()-1; i++) {
		int diff2 = (s[i] - '0') - (s[i + 1] - '0');
		if (diff == diff2) diff = diff2;
		else return;
	}
	cnt++;
}

int main() {
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		solve(i);
	}

	cout << cnt << endl;
}