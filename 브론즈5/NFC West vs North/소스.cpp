#include <iostream>
#include <iomanip>

int main() {
	std::cout.setf(std::ios::left);
	std::cout << std::setw(15) << "NFC West" << std::setw(4) << "W" << std::setw(3) << "L" << std::setw(1) << "T" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::setw(15) << "Seattle" << std::setw(4) << "13" << std::setw(3) << "3" << std::setw(1) << "0" << std::endl;
	std::cout << std::setw(15) << "San Francisco" << std::setw(4) << "12" << std::setw(3) << "4" << std::setw(1) << "0" << std::endl;
	std::cout << std::setw(15) << "Arizona" << std::setw(4) << "10" << std::setw(3) << "6" << std::setw(1) << "0" << std::endl;
	std::cout << std::setw(15) << "St. Louis" << std::setw(4) << "7" << std::setw(3) << "9" << std::setw(1) << "0" << std::endl;

	std::cout << std::endl;

	std::cout.setf(std::ios::right);
	std::cout << std::left << std::setw(15) << "NFC North" << std::right << std::setw(1) << "W" << std::setw(4) << "L" << std::setw(3) << "T" << std::endl;
	std::cout << "-----------------------" << std::endl;
	std::cout << std::left << std::setw(15) << "Green Bay" << std::right << std::setw(1) << "8" << std::setw(4) << "7" << std::setw(3) << "1" << std::endl;
	std::cout << std::left << std::setw(15) << "Chicago" << std::right << std::setw(1) << "8" << std::setw(4) << "8" << std::setw(3) << "0" << std::endl;
	std::cout << std::left << std::setw(15) << "Detroit" << std::right << std::setw(1) << "7" << std::setw(4) << "9" << std::setw(3) << "0" << std::endl;
	std::cout << std::left << std::setw(15) << "Minnesota" << std::right << std::setw(1) << "5" << std::setw(4) << "10" << std::setw(3) << "1" << std::endl;

	return 0;
}