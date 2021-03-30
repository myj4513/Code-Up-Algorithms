#include <iostream>

using namespace std;

int main(void) {
	int h, b, c, s;
	float size;
	cin >> h >> b >> c >> s;
	size = (float)h*b*c*s / (8*1024*1024);
	printf("%.1f MB", size);
	return 0;
}