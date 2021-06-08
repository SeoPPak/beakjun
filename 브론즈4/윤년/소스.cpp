#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int year;
	std::cin >> year;

	bool yoon = ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0);

	if (yoon)
		std::cout << 1 << std::endl;
	else
		std::cout << 0 << std::endl;

	return 0;
}