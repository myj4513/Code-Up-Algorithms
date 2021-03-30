#include <iostream>

using namespace std;

int main(void) {
	int a, d, n;
	cin >> a >> d >> n;
	for (int i = 1; i < n; i++) {
		a += d;
	}
	printf("%d", a);
	return 0;
}