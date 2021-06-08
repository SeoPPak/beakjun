#include <iostream>
#include <vector>

int main() {
	std::vector<int> ch{ 1, 1, 2, 2, 2, 8 };
	std::vector<int> peice(6);
	int chs;

	std::cin >> peice[0] >> peice[1] >> peice[2] >> peice[3] >> peice[4] >> peice[5];

	for (int i = 0; i < 6; i++) {
		std::cout << ch[i] - peice[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}