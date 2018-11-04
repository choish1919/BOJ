#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int ans = 1;
	int num[10] = { 0, };

	for(int digit = 0; digit < 7; digit++) {
		for (int i = 0; i <= 9; i++) {
			if (s.find(i + '0') != string::npos) {
				if (i == 9 && num[6] == 0 && num[9] == 1) {
					num[6]++;
					s.erase(s.find(i + '0'), 1);
					continue;
				}
				if (i == 6 && num[9] == 0 && num[6] == 1) {
					num[9]++;
					s.erase(s.find(i + '0'), 1);
					continue;
				}
				if (num[i] == 0) {
					num[i]++;
					s.erase(s.find(i + '0'), 1);
					continue;
				}
				if (s.find(i + '0') != string::npos && num[i] == 1) {
					fill_n(num, 10, 0);
					s.erase(s.find(i + '0'), 1);
					num[i]++;
					ans++;
				}
			}
		}
	}
	cout << ans << endl;

	return 0;
}