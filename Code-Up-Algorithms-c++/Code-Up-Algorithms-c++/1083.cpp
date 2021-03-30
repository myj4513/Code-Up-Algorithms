#include <iostream>

using namespace std;

int main(void) {
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		if (i % 3 != 0) printf("%d ", i);
		else printf("X ");
	}
	return 0;
}