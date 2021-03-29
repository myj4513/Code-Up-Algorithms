#include <iostream>

int main(void) {
	int a, b, c;
	char d, e;

	std::cin >> a >> d >> b >> e >> c;
	std::cout.width(4);
	std::cout.fill('0');
	std::cout << a<<".";
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << b<<".";
	std::cout.width(2);
	std::cout.fill('0');
	std::cout << c;
	return 0;
}