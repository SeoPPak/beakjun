#include <iostream>

int main() {
	int r1, s;
	std::cin >> r1 >> s;

	if ((r1 >= -1000 && r1 <= 1000) && (s >= -1000 && s <= 1000)) {
		std::cout << 2 * s - r1 << std::endl;
	}
	else {
		std::cout << "wrong value" << std::endl;
	}

	return 0;
}