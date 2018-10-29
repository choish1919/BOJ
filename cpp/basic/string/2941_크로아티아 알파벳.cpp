#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	int cnt = 0;
	while (s.find("c=", 0, 2) != string::npos) {
		s.replace(s.find("c=", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("c-", 0, 2) != string::npos) {
		s.replace(s.find("c-", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("dz=", 0, 3) != string::npos) {
		s.replace(s.find("dz=", 0, 3), 3, " ");
		cnt++;
	}
	while (s.find("d-", 0, 2) != string::npos) {
		s.replace(s.find("d-", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("lj", 0, 2) != string::npos) {
		s.replace(s.find("lj", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("nj", 0, 2) != string::npos) {
		s.replace(s.find("nj", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("s=", 0, 2) != string::npos) {
		s.replace(s.find("s=", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find("z=", 0, 2) != string::npos) {
		s.replace(s.find("z=", 0, 2), 2, " ");
		cnt++;
	}
	while (s.find(" ", 0, 1) != string::npos) {
		s.erase(s.find(" ", 0, 1), 1);
	}
	cnt += s.size();
	cout << cnt << endl;
	return 0;
}