#include <iostream>

int main() {
	int time;
	std::cin >> time;

	if (time % 5 != 0)
		std::cout << time / 5 + 1 << std::endl;
	else
		std::cout << time / 5 << std::endl;			

	return 0;
}