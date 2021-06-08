#include <iostream>
#include <cmath>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int info, math, sience, eng, minsum = 0, mansum = 0;

	for (int i = 0; i < 2; i++) {
		std::cin >> info >> math >> sience >> eng;

		i == 0 ? minsum = info + math + sience + eng : mansum = info + math + sience + eng;
	}

	int sum = std::max(minsum, mansum);

	std::cout << sum << std::endl;

	return 0;
}