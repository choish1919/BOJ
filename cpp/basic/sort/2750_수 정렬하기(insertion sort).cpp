#include <iostream>
#include <vector>

using namespace std;

void insertionSort(vector<int>& v) {
	for (int i = 1; i < v.size(); i++) {
		int cur = v[i];
		int j = i - 1;
		while (j >= 0 && v[j] > cur) {
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = cur;
	}
}

int main() {
	int n;
	vector<int> v;
	scanf("%d", &n);
	while (n--) {
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}

	insertionSort(v);
	for (int &i : v) printf("%d\n", i);

	return 0;
}