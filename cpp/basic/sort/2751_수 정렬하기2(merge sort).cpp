#include <iostream>
#include <vector>

using namespace std;

void merge_sort(vector<int>& v) {
	if (v.size() < 2) return;
	int mid = v.size() / 2;
	vector<int> lefthalf(v.begin(), v.begin() + mid);
	vector<int> righthalf(v.begin() + mid, v.end());
	int p = lefthalf.size();
	int q = righthalf.size();

	merge_sort(lefthalf);
	merge_sort(righthalf);

	int i, j, k;
	i = j = k = 0;

	while (i < p and j < q) {
		if (lefthalf[i] < righthalf[j]) {
			v[k] = lefthalf[i];
			i++;
		}
		else {
			v[k] = righthalf[j];
			j++;
		}
		k++;
	}

	while (i < p) {
		v[k] = lefthalf[i];
		i++;
		k++;
	}

	while (j < q) {
		v[k] = righthalf[j];
		j++;
		k++;
	}
}

int main() {
	int n;
	scanf("%d", &n);
	vector<int> v;
	while (n--) {
		int num;
		scanf("%d", &num);
		v.push_back(num);
	}
	merge_sort(v);
	for (int &i : v) printf("%d\n", i);

	return 0;
}