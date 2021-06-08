#include <iostream>
#include <vector>

int main() {
	std::vector<int> time(4);
	int t, sum = 0;

	for (int elem : time) {
		std::cin >> t;
		time.push_back(t);
		sum += t;
	}

	int min, sec;

	min = sum / 60;
	sec = sum % 60;

	std::cout << min << std::endl << sec << std::endl;

	return 0;
}