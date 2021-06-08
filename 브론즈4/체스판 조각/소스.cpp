#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int n, x, y;
	std::cin >> n;

	x = n / 2 + 1;
	y = n / 2 + n % 2 + 1;

	std::cout << x * y << std::endl;

	return 0;
}