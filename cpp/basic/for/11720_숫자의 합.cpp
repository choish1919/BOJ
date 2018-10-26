#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	int sum = 0;
	string s;
	cin >> n;
	cin >> s;

	for (char c : s) {
		sum += (c - '0');
	}

	cout << sum << endl;
}