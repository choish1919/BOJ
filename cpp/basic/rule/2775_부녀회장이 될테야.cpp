#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int k, n;
		int house[15][15];
		cin >> k;
		cin >> n;
		for (int i = 1; i <= n; i++) { house[0][i] = i;}
		for (int i = 1; i <= k; i++) {
			int sum = 0;
			for (int j= 1; j <= n; j++) {
				sum += house[i-1][j];
				house[i][j] = sum;
			}
		}
		cout << house[k][n] << endl;
	}

	return 0;
}