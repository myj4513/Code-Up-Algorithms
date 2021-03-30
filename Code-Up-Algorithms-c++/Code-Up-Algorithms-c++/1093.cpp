#include <iostream>

using namespace std;

int main(void) {
	int n, c, a[23] = {};
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		a[c - 1]++;
	}
	for (int i = 0; i < 23; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}