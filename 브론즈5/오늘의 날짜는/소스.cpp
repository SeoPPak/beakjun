#include <iostream>
#include <ctime>
#include <iomanip>

int main() {
	time_t curr_time;
	struct tm* curr_tm = new struct tm;
	curr_time = time(NULL);
	localtime_s(curr_tm, &curr_time);
	int year = curr_tm->tm_year + 1900;
	int mon = curr_tm->tm_mon + 1;
	int day = curr_tm->tm_mday;

	std::cout << year << std::endl << std::setw(2) << std::setfill('0') << mon << std::endl << std::setw(2) << std::setfill('0') << day << std::endl;
	
	delete curr_tm;
	return 0;
}