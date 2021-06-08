#include <iostream>
#include <string>

int main() {
	std::string octa;
	std::cin >> octa;
	int invert = 0;

	for (char elem : octa) {
		if (elem >= 'A' && elem <= 'F')
			invert += (elem - 'A' + 10);
		else
			invert += (elem - '0');
		invert *= 16;
	}

	invert /= 16;
	std::cout << invert << std::endl;
	return 0;
}