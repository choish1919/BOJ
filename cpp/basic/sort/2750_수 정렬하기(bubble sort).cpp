#include <iostream>

using namespace std;

int num[1001] = { 0, };

void bubbleSort(int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (num[j - 1] > num[j]) {
				int tmp = num[j - 1];
				num[j - 1] = num[j];
				num[j] = tmp;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}

	bubbleSort(n);

	for (int i = 0; i < n; i++) { cout << num[i] << endl; }

	return 0;
}