#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	int count[10001] = { 0, };
	while (n--) {
		int num;
		scanf("%d", &num);
		count[num]++;	
	}
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < count[i]; j++) {
			printf("%d\n", i);
		}
	}

	return 0;
}