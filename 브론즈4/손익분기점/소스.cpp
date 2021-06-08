#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	long long a, b, c;
	std::cin >> a >> b >> c;

	if (a <= 2100000000 && b <= 2100000000 && c <= 2100000000) {
		long long int i;

		if (b >= c)
			i = -1;
		else {
			i = a / (c - b) + 1;
		}
		std::cout << i << std::endl;
	}
	else
		std::cout << -1 << std::endl;

	return 0;
}