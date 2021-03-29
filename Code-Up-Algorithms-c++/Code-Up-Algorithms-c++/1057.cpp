#include <iostream>

using namespace std;

int main(void) {
	int a, b;
	cin >> a >> b;
	printf("%d", ((a && b)==1) || ((b || a) ==0));
	return 0;
}