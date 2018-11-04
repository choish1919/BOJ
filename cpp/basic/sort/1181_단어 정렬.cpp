#include <iostream>
#include <vector>
#include <string>

using namespace std;

void mergeSort(vector<string>& v) {
	if (v.size() < 2) return;
	int mid = v.size() / 2;
	vector<string> left(v.begin(), v.begin() + mid);
	vector<string> right(v.begin()+mid, v.end());
	int p = left.size();
	int q = right.size();

	mergeSort(left);
	mergeSort(right);

	int i, j, k;
	i = j = k = 0;

	while (i < p && j < q) {
		if (left[i].length() < right[j].length()) {
			v[k] = left[i];
			i++;
		}
		else if(left[i].length() > right[j].length()) {
			v[k] = right[j];
			j++;
		}
		else {
			if (left[i].compare(right[j]) < 0) {
				v[k] = left[i];
				i++;
			}
			else {
				v[k] = right[j];
				j++;
			}
		}
		k++;
	}

	while (i < p) {
		v[k] = left[i];
		i++;
		k++;
	}

	while (j < q) {
		v[k] = right[j];
		j++;
		k++;
	}
}

int main() {
	int n;
	cin >> n;
	vector<string> v;
	while (n--) {
		string s;
		cin >> s;
		v.push_back(s);
	}

	mergeSort(v);

	string last = "";
	for (string &s : v) {
		if(last != s) cout << s << endl;
		last = s;
	}

	return 0;
}