#include <iostream>
#include <cmath>

int main() {
	unsigned long long int money, human;
	int share, rest;

	std::cin >> money >> human;

	if (human > money) {
		std::cout << "too many humans" << std::endl;
	}
	else if (human < 1) {
		std::cout << "ther's no human to share" << std::endl;
	}
	else if (money > pow(10, 1000)) {
		std::cout << "too much money" << std::endl;
	}
	else {
		std::cout << money / human << std::endl;
		std::cout << money % human << std::endl;
	}

	return 0;
}