#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0;
	for (char &c : s) {
		i++;
		cout << c;
		if (i >= 10) {
			cout << endl;
			i = 0;
		}
	}
}