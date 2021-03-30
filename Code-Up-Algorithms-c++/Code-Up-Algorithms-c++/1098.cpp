#include <iostream>

using namespace std;

int main(void) {
	int w, h, a[100][100] = {}, x, y, d, l, n;
	cin >> w >> h;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> l >> d >> x >> y;
		if (d == 0) {
			for (int j = 0; j < l; j++) {
				a[x - 1][y - 1] = 1;
				y++;
			}
		}
		else if (d == 1) {
			for (int j = 0; j < l; j++) {
				a[x - 1][y - 1] = 1;
				x++;
			}
		}
	}
	for (int i = 0; i < w; i++) {
		for (int j = 0; j < h; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}