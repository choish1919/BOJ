#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while (n--) {
		int num;
		cin >> num;
		int cnt = 0;
		for (int i = 2; i <= num; i++) {
			if (num % i == 0) cnt++;
		}
		if (cnt == 1) ans++;
	}

	cout << ans << endl;

	return 0;
}