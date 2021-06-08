#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b, diff;
	std::cin >> a >> b;

	if ((a >= -2000000000 && a <= 2000000000) && (b >= -2000000000 && b <= 2000000000)); {
		if (a >= b) {
			diff = a - b;
		}
		else {
			diff = b - a;
		}

		std::cout << diff << std::endl;
	}

	return 0;
}