#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m, n, x, y;
		cin >> m >> n >> x >> y;
		while (x != y) {
			if (x < y) x += m;
			else y += n;
			if (x > m*n || y > m*n) break;
		}
		if (x == y) cout << x << endl;
		else cout << -1 << endl;
	}

	return 0;
}