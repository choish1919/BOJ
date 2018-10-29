#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int x, y;
	x = y = 1;
	int a = 2;
	int d = 0;
	bool incrementY = true;
	bool incXdecY = false;
	for (int i = 2; i <= n; i++) {
		if (i == a+d) {
			if (incrementY) y++;
			else x++;
			incrementY = !incrementY;
			if (d == 0) d = 2;
			else d++;
			a = i;
			incXdecY = !incXdecY;
		}
		else {
			if (incXdecY) x++, y--;
			else x--, y++;
		}
	}
	
	cout << x << '/' << y << endl;

	return 0;
}