#include <iostream>

using namespace std;

int main() {
	char input[101];
	for (int i = 0; i < 100; i++) {
		cin.getline(input, sizeof(input));
		if(input[0] != '\0') cout << input << endl;
		else break;
	}
}