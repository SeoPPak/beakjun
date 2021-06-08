#include <iostream>

int main() {
	int a, b;
	std::cin >> a >> b;

	int sum = 0;
	if ((a > 0 && a < 10) && (b > 0 && b < 10)) {
		sum = a + b;
		std::cout << sum << std::endl;
	}
	else {
		std::cout << "wrong value" << std::endl;
	}

	return 0;
}