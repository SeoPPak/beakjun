#include <iostream>

int main() {
	int a, b, c;

	std::cin >> a >> b >> c;

	if ((a <= 10000 && a >= 2) && (b <= 10000 && b >= 2) && (c <= 10000 && c >= 2)) {
		std::cout << (a + b) % c << std::endl;
		std::cout << ((a % c) + (b % c)) % c << std::endl;
		std::cout << (a * b) % c << std::endl;
		std::cout << ((a % c) * (b % c)) % c << std::endl;
	}
	return 0;
}