#include <iostream>
#include <cmath>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int daegak, garo_rate, sero_rate;

	std::cin >> daegak >> garo_rate >> sero_rate;

	float sqrt = std::sqrt(pow(garo_rate, 2) + pow(sero_rate, 2));
	float i = 0;

	i = daegak / sqrt;

	std::cout << int(garo_rate * i) << " " << int(sero_rate * i) << std::endl;

	return 0;
}