#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
		string s;
		cin >> s;
		int sum = 0;
		int score = 0;
		for(char &c : s){
			if (c == 'O') score++;
			else score = 0;
			sum += score;
		}
		cout << sum << endl;
	}

	return 0;
}