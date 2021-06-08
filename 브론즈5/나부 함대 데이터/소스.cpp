#include <iostream>
#include <iomanip>

int main() {
	std::cout.setf(std::ios::left);
	std::cout << std::setw(15) << "SHIP NAME" << std::setw(15) << "CLASS" << std::setw(11) << "DEPLOYMENT" << std::setw(11) << "IN SERVICE" << std::endl;
	std::cout << std::setw(15) << "N2 Bomber" << std::setw(15) << "Heavy Fighter" << std::setw(11) << "Limited" << std::setw(11) << "21" << std::endl;
	std::cout << std::setw(15) << "J-Type 327" << std::setw(15) << "Light Combat" << std::setw(11) << "Unlimited" << std::setw(11) << "1" << std::endl;
	std::cout << std::setw(15) << "NX Cruiser" << std::setw(15) << "Medium Fighter" << std::setw(11) << "Limited" << std::setw(11) << "18" << std::endl;
	std::cout << std::setw(15) << "N1 Starfighter" << std::setw(15) << "Medium Fighter" << std::setw(11) << "Unlimited" << std::setw(11) << "25" << std::endl;
	std::cout << std::setw(15) << "Royal Cruiser" << std::setw(15) << "Light Combat" << std::setw(11) << "Limited" << std::setw(11) << "4" << std::endl;

	return 0;
}
