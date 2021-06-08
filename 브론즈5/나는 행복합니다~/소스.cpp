#include <iostream>

int main() {
	int n, m, k;
	int x, y;

	std::cin >> n >> m >> k;

	x = k / m;
	y = k % m;

	std::cout << x << " " << y << std::endl;

	return 0;
}