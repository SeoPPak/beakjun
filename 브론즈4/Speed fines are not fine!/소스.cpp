#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int limit, speed;
	std::cin >> limit >> speed;

	int over = speed - limit;

	if (over > 0) {
		int fee =  over <= 20 ? 100 : (over <= 30 ? 270 : 500);
		std::cout << "You are speeding and your fine is $" << fee << "." << std::endl;
	}
	else
		std::cout << "Congratulations, you are within the speed limit!" << std::endl;

	return 0;
}