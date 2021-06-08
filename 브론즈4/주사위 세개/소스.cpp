#include <iostream>
#include <vector>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> dice(3);
	std::vector<int> noon(6, 0);

	std::cin >> dice.at(0) >> dice.at(1) >> dice.at(2);

	for (int elem : dice) {
		if (elem <= 6 && elem >= 1)
			noon.at(elem - 1)++;
	}

	int one, two, three, idx = 1;
	int price;

	for (int elem : noon) {
		if (elem == 3) {
			three = idx;
			price = 10000 + 1000 * three;
			break;
		}
		else if (elem == 2) {
			two = idx;
			price = 1000 + 100 * two;
			break;
		}
		else if (elem == 1) {
			one = idx;
			price = 100 * one;
		}

		idx++;
	}

	std::cout << price << std::endl;

	return 0;
}