#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int original = n;
	int cnt = 0;

	do {
		int sum = 0;
		if (n < 10) {
			n = n * 10 + n;
		}
		else {
			int front = n % 10;
			sum += n % 10;
			n /= 10;
			sum += n % 10;
			int back = sum % 10;
			n = front * 10 + back;
		}
		cnt++;
	} while (n != original);

	cout << cnt << endl;
}