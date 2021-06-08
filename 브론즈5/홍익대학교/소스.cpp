#include <iostream>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int year;
	std::cin >> year;

	std::cout << year - 1946 << std::endl;

	return 0;
}