#include <iostream>

using namespace std;

int main(void) {
	int w,h,b;
	float size;
	cin >> w>>h>>b;
	size = (float)w*h*b / ( 8*1024 * 1024);
	printf("%.2f MB", size);
	return 0;
}