#include <iostream>

using namespace std;

int main() {
	int c, n;
	cin >> c;
	while (c--) {
		int cnt = 0;
		int score[1001];
		int sum = 0;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> score[i];
			sum += score[i];
		}
		for (int i = 0; i < n; i++) {
			if (score[i] > (double)sum / n) cnt++;
		}
		double per = ((double)cnt / n) * 100;
		cout << fixed;
		cout.precision(3);
		cout << per << '%' << endl;
	}
}