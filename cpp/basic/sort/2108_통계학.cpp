#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int n;
	scanf_s("%d", &n);
	vector<int> v;
	int sum = 0;
	int mi = 4001;
	int ma = -4001;
	int count[8001] = { 0, };
	while (n--) {
		int num;
		scanf_s("%d", &num);
		sum += num;
		mi = min(mi, num);
		ma = max(ma, num);
		count[num + 4000]++;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	int countMa = -1;
	int freq = 0;
	for (int i = 0; i < 8001; i++) {
		if (countMa < count[i]) {
			countMa = count[i];
			freq = i - 4000;
		}
	}

	int freqCnt = 0;
	for (int i = 0; i < 8001; i++) {
		if (countMa == count[i]) {
			freqCnt++;
		}
		if (freqCnt == 2) {
			freq = i - 4000;
			break;
		}
	}

	printf_s("%d\n%d\n%d\n%d\n", (int)round((double)sum / v.size()), v[v.size() / 2], freq, ma - mi);

	return 0;
}