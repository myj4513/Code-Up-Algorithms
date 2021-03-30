#include <iostream>

using namespace std;

int main(void) {
	int a, sum = 0, i=0;
	cin >> a;
	while (sum < a) {
		i++;
		sum += i;
	}
	printf("%d", sum);
	return 0;
}