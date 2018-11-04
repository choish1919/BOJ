#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>

using namespace std;

bool isPrime(int n) {
	if (n <= 1) return false;
	for (int j = 2; j*j <= n; j++) {
		if (n % j == 0) return false;
	}
	return true;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (isPrime(n / 2)) {
			printf("%d %d\n", n / 2, n / 2);
			continue;
		}

		int i, j, a, b;
		i = j = 1;
		a = b = 0;

		while (a + b != n) {
			while (!isPrime(n / 2 - i) && n / 2 - i > 0) i++;
			while (!isPrime(n / 2 + j) && n / 2 + j < n) j++;
			a = n / 2 - i;
			b = n / 2 + j;
			if (a + b < n) j++;
			else i++;
		}

		printf("%d %d\n", a, b);
	}
	return 0;
}