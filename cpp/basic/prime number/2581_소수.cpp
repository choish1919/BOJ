#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	int sum = 0;
	int mi = 987654321;
	bool hasPrime = false;
	for (int i = m; i <= n; i++) {
		int cnt = 0;
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		if (cnt == 1) {
			hasPrime = true;
			sum += i;
			mi = min(mi, i);
		}
	}
	if (!hasPrime) cout << -1 << endl;
	else cout << sum << endl << mi << endl;

	return 0;
}