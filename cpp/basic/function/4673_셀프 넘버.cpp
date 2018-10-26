#include <iostream>

using namespace std;

bool selfNum[10001] = { false, };

void solve(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	selfNum[sum] = true;
}

int main() {
	for (int i = 1; i <= 10000; i++) {
		solve(i);
	}
	for (int i = 1; i <= 10000; i++) {
		if (!selfNum[i]) cout << i << endl;
	}
}