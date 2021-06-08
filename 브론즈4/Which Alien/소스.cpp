#include <iostream>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int eyes, antenas;
	std::cin >> antenas >> eyes;

	bool troy = false, vlad = false, graeme = false;

	if (antenas > 6)
		troy = true;
	else if (antenas >= 3) {
		troy = true;
		vlad = true;
	}
	else {
		vlad = true;
		graeme = true;
	}

	if (troy) {
		if (eyes <= 4)
			std::cout << "TroyMartian" << std::endl;
	}

	if (vlad) {
		if (eyes >= 2)
			std::cout << "VladSaturnian" << std::endl;
	}
		
	if (graeme) {
		if (eyes <= 3)
			std::cout << "GraemeMercurian" << std::endl;
	}

	return 0;
}