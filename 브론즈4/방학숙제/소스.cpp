#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int l, a, b, c, d;
	std::cin >> l >> a >> b >> c >> d;

	int mday, lday;

	lday = a / c;
	mday = b / d;

	a% c != 0 ? lday++ : lday;
	b% d != 0 ? mday++ : mday;

	int vacation;
	vacation = lday >= mday ? l - lday : l - mday;

	std::cout << vacation << std::endl;

	return 0;
}