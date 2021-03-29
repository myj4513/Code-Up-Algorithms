#include <iostream>

int main(void) {
	long long int a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n", a + b);
	printf("%lld\n", a - b);
	printf("%lld\n", a * b);
	printf("%lld\n", a / b);
	printf("%lld\n%.2lf", a%b, (float)a/b);
	return 0;
}