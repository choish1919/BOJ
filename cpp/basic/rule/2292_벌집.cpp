#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 1;
	for (int i = 1; n - 1 > 0; i++) {
		n -= 6 * i;
		cnt++;
	}
	cout << cnt << endl;
	return 0;
}