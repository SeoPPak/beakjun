#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int score;
	std::cin >> score;

	switch (score / 10)
	{
	case 9:
	case 10:
		std::cout << 'A';
		break;
	case 8:
		std::cout << 'B';
		break;
	case 7:
		std::cout << 'C';
		break;
	case 6:
		std::cout << 'D';
		break;
	default:
		std::cout << 'F';
		break;
	}

	std::cout << std::endl;


	return 0;
}