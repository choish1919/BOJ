#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	int cnt = 0;
	getline(cin, s);

	bool lastWord = false;
	for (char &c : s) {
		if (c != ' ' && !lastWord) lastWord = true;
		else if (c == (int)' ' && lastWord) {
			cnt++;
			lastWord = false;
		}
	}
	if (lastWord) cnt++;

	cout << cnt << endl;

	return 0;
}