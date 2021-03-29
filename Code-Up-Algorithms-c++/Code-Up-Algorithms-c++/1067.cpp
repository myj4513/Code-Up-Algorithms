#include <iostream>

using namespace std;

int main(void) {
	int a;
	cin >> a;
	if (a > 0) printf("plus\n");
	else printf("minus\n");
	if (a % 2 == 0) printf("even");
	else printf("odd");
	return 0;
}