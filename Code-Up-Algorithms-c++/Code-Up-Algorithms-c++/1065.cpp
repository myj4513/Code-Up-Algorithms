#include <iostream>

using namespace std;

int main(void) {
	int a[3];
	for (int i = 0; i < 3; i++) cin >> a[i];
	for (int i = 0; i < 3; i++) {
		if (a[i] % 2 == 0) printf("%d\n", a[i]);
	}
	return 0;
}