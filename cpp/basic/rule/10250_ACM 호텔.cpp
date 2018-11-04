#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int h, w, n;
		cin >> h >> w >> n;
		int x, y;
		x = (n % h == 0) ? n / h : n / h + 1;
		y = (n % h == 0) ? h : n % h;
		printf("%d%02d\n", y, x);
	}

	return 0;
}