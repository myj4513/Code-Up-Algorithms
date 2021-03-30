#include <iostream>

using namespace std;

int main(void) {
	int a, b, c;
	int i = 1;
	cin >> a >> b >> c;
	while ((i%a != 0) || (i%b != 0) || (i%c != 0)) {
		i++;
	}
	printf("%d", i);
	return 0;
}