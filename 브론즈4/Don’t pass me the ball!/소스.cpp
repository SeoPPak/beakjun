#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int player, pos;
	std::cin >> player;

	long long p = 1;
	for (int i = 0; i < 3; i++) {
		player--;
		p *= player; 
	}

	pos = p / 6;

	std::cout << pos << std::endl;

	return 0;
}