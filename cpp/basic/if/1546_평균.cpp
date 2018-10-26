#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int score[1001];
	int mx = 0;
	double sum = 0;
	double avg = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> score[i];
		mx = max(mx, score[i]);
	}
	for (int i = 0; i < n; i++) {
		double newScore = ((double)score[i] / mx) * 100;
		sum += newScore;
	}
	avg = sum / n;
	cout << avg << endl;
}