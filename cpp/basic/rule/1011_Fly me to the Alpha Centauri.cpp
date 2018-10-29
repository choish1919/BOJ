#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long x, y;
		cin >> x >> y;
		long long ans = 0;
		for (int i = 1; i <= y - x; i++) {
			if (y - x < pow(i+1,2)) {
				ans = (2 * i - 1) + ceil((y - x - pow(i, 2)) / (double)i);
				break;
			}
		}
		cout << ans << endl;
	}
	return 0;
}