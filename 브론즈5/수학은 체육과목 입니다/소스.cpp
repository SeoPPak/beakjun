#include <iostream>

int main() {
	unsigned long num;
	std::cin >> num;
	if(num >= 1 && num <= 1000000000)	
		std::cout << num * 4 << std::endl;

	return 0;
}