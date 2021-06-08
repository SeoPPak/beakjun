#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int a, b;
	std::cin >> a >> b;
	long double result = a * 1.0 / b;

	std::cout.precision(32);
	std::cout << result;

	return 0;
}