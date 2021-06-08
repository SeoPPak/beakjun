#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int hap, cha, win, lose;
	std::cin >> hap >> cha;

	win = (hap + cha) / 2;
	lose = hap - win;

	(win >= 0) && (lose >= 0) && (win + lose == hap) && (win - lose == cha) ? std::cout << win << " " << lose << std::endl : std::cout << -1 << std::endl;

	return 0;
}