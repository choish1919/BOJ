#include <iostream>
#include <string>

using namespace std;

string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };
int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };


int main() {
	int x, y;
	int total = 0;
	cin >> x >> y;
	for (int i = 0; i < x - 1; i++) {
		total += months[i];
	}
	total += y-1;

	cout << days[total % 7] << endl;
}