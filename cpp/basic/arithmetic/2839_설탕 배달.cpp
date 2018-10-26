#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int dp[5001] = { 0 };
	int n;
	int ans = 0;

	cin >> n;

	dp[1] = dp[2] = 987654321;

	for (int i = 3; i <= n; i++) {
		dp[i] = 987654321;
		dp[i] = min(dp[i], dp[i - 3] + 1);
		if (i >= 5) {
			dp[i] = min(dp[i], dp[i - 5] + 1);
		}
	}

	ans = dp[n];

	if (ans == 987654321) ans = -1;

	cout << ans << endl;
}