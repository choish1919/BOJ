#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int mul = a * b * c;
	int cnt[10] = { 0, };

	string s = to_string(mul);
	for (char &c : s) { cnt[c - '0']++; }

	for (int &i : cnt) { cout << i << endl; }

	return 0;
}