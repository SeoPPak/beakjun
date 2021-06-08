#include <iostream>
#include <cmath>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int sang, jung, ha, coke, cider;
	std::cin >> sang >> jung >> ha >> coke >> cider;

	int minimum;
	minimum = std::min(sang, std::min(jung, ha)) + std::min(coke, cider) - 50;

	std::cout << minimum << std::endl;

	return 0;
}