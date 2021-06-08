#include <iostream>
#include <vector>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> score(5);
	std::cin >> score.at(0) >> score.at(1) >> score.at(2) >> score.at(3) >> score.at(4);

	int sum = 0;
	for (int elem : score) {
		elem = elem < 40 ? 40 : elem;
		sum += elem;
	}

	std::cout << sum / 5 << std::endl;

	return 0;
}