#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>& v) {
	for (int i = 0; i < v.size()-1; i++) {
		int min = i;
		for (int j = i + 1; j < v.size(); j++) {
			if (v[min] > v[j]) min = j;
		}
		int tmp = v[min];
		v[min] = v[i];
		v[i] = tmp;
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}
	selection_sort(v);
	for (int &i : v) {
		cout << i << endl;
	}

	return 0;
}