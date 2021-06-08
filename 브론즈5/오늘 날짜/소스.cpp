#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
	struct tm time;
	time_t curr_time = std::time(nullptr);
	localtime_s(&time, &curr_time);

	int year = time.tm_year + 1900;
	int mon = time.tm_mon + 1;
	int date = time.tm_mday;

	std::cout << year << "-" << std::setw(2) << std::setfill('0') << mon << "-" << std::setw(2) << std::setfill('0') << date << std::endl;

	return 0;
}