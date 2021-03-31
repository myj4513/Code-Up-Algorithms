#include <iostream>

using namespace std;

int main(void) {
	int a[10][10] = {}, x = 1, y = 1;
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cin >> a[i][j];
		}
	}
	
	while (a[x][y] != 2) {
		a[x][y] = 9;
		if (a[x][y + 1] != 1) y++;
		else if (a[x + 1][y] != 1) x++;
		else break;
	}
	a[x][y] = 9;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}