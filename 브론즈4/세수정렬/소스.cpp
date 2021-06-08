#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b, c;
	std::cin >> a >> b >> c;

	int max, mid, min;

	max = a > b ? (a > c ? a : c) : (b > c ? b : c);
	min = a > b ? (b < c ? b : c) : (a < c ? a : c);
	mid = a > b ? (b > c ? b : (c > a ? a : c)) : (a > c ? a : (c > b ? b : c));

	std::cout << min << " " << mid << " " << max << std::endl;

	return 0;
}