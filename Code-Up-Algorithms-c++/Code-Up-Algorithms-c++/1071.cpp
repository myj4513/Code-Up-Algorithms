#include <iostream>

using namespace std;

int main(void) {
	int a;
	loop:
	cin >> a;
	if (a != 0) {
		printf("%d\n", a);
		goto loop;
	}
	return 0;
}