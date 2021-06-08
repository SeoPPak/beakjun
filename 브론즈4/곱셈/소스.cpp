#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int fst, snd;
	int one, two, three, four;

	std::cin >> fst >> snd;

	one = fst * (snd % 10);
	two = fst * ((snd / 10) % 10);
	three = fst * (snd / 100);
	four = one + two * 10 + three * 100;

	std::cout << one << std::endl << two << std::endl << three << std::endl << four << std::endl;

	return 0;
}