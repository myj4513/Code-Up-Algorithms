#include <iostream>

using namespace std;

int main(void) {
	int n, a[10000], min=24;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {
		if (a[i] < min) min = a[i];
	}
	printf("%d", min);
	return 0;
}