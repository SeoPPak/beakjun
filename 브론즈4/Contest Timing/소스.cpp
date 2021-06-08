#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int d, h, m;
	std::cin >> d >> h >> m;

	int timing = 0;
	int begin = 11 * 60 * 24 + 11 * 60 + 11 * 1;
	timing = d * 24 * 60 + h * 60 + m * 1 - begin;

	timing = timing >= 0 ? timing : -1;

	std::cout << timing << std::endl;

	return 0;
}