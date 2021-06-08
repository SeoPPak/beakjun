#include <iostream>
#include <vector>

int main() {
	std::vector<int> score(5);
	int Ai = 0;
	int sum = 0;

	for (int elem : score) {
		std::cin >> Ai;
		if (Ai <= 100 && Ai >= 0) {
			score.push_back(Ai);
		}
	}

	for (int elem : score) {
		sum += elem;
	}
 
	std::cout << sum << std::endl;

	return 0;
}