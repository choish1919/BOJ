#include <iostream>
#include <vector>

using namespace std;

int main() {
	int m, n;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++) {
		bool isPrime = true;
		for (int j = 2; j*j <= i; j++) {
			if (i % j == 0) {
				isPrime = false;
				break;
			}
		}
		if(isPrime & i != 1) printf("%d\n", i);
	}

	return 0;
}