#include <iostream>

int main(void) {
	float a;
	std::cin >> a;
	std::cout << std::fixed;
	std::cout.precision(2);
	std::cout << a;
	return 0;
}