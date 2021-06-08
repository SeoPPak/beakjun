#include <iostream>
#include <cmath>

int main() {
	int z, f, s, t, fr;
	int mult;
	std::cin >> z >> f >> s >> t >> fr;

	mult = pow(z, 2) + pow(f, 2) + pow(s, 2) + pow(t, 2) + pow(fr, 2);

	std::cout << mult % 10 << std::endl;

	return 0;
}