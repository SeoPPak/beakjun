#include <iostream>
#include <string>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int digit;
	std::cin >> digit;

	std::string burg = "1723";

	std::cout << burg[digit - 1] << std::endl;

	return 0;
}