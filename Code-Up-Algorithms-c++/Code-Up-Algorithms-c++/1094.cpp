#include <iostream>

using namespace std;

int main(void) {
	int n, c, a[10000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		printf("%d ", a[i]);
	}
	return 0;
}