#include <iostream>

using namespace std;

int main() {
	int a, b, c;
	int ans = 0;
	cin >> a >> b >> c;
	if (a > b) {
		if (b > c) ans = b;
		else if (a > c) ans = c;
		else ans = a;
	}
	else {
		if (a > c) ans = a;
		else if (c > b) ans = b;
		else ans = c;
	}
	cout << ans << endl;
}