#include <iostream>

using namespace std;

int main(void) {
	long long int a, d, n;
	cin >> a >> d >> n;
	for (int i = 1; i < n; i++) {
		a *= d;
	}
	printf("%lld", a);
	return 0;
}