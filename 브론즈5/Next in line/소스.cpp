#include <iostream>

int main() {
	int Y, M, dif;

	std::cin >> Y;
	std::cin >> M;

	if (Y >= 0 && Y <= 50) {
		if (M >= Y && M <= 50) {
			dif = M - Y;
		}
	}

	std::cout << M + dif << std::endl;

	return 0;
}