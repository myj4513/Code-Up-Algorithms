#include <iostream>

using namespace std;

int main(void) {
	long long int a, b, c;
	cin >> a >> b >> c;
	printf("%lld %.1f", a + b + c, ((float)a + b + c)/3);
	return 0;
}