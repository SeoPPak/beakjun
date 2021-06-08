#include <iostream>
#include <ctime>

int main() {
	int ran;
	srand(time(NULL));
	ran = rand() % 2;

	std::cout << ran << std::endl;

	return 0;
}