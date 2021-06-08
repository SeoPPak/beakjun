#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int hour, min, sec, time;

	std::cin >> hour >> min >> sec;
	std::cin >> time;

	hour += time / 3600;
	min += time % 3600 / 60;
	sec += time % 60;

	if (sec >= 60) {
		sec -= 60;
		min++;
	}

	if (min >= 60) {
		min -= 60;
		hour++;
	}

	hour = hour >= 24 ? hour % 24 : hour;

	std::cout << hour << " " << min << " " << sec << std::endl;

	return 0;
}