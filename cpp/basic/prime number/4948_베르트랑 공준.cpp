#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf_s("%d", &n);
	while (n != 0) {
		int cnt = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			bool isPrime = true;
			for (int j = 2; j*j <= i; j++) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime & i != 1) cnt++;
		}
		printf_s("%d\n", cnt);
		scanf_s("%d", &n);
	}

	return 0;
}