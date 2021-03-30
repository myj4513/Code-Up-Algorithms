#include <iostream>

using namespace std;

int main(void) {
	int n, a[19][19] = {}, x, y;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		a[x-1][y-1] = 1;
	}
	for (int i = 0; i < 19; i++) {
		for (int j = 0; j < 19; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}