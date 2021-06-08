#include <iostream>
#include <iomanip>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int hour, min, time;
	std::cin >> hour >> min;
	std::cin >> time;

	min += time % 60;
	hour += time / 60;

	if (min >= 60) {
		min -= 60;
		hour++;
	}

	hour = hour >= 24 ? hour - 24 : hour;

	std::cout << hour << " " << min << std::endl;

	return 0;
}