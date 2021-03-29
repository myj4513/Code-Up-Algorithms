#include <iostream>

int main(void) {
	long double a;
	std::cin >> a;
	std::cout << std::fixed;
	std::cout.precision(6);
	std::cout << a;
	return 0;
}