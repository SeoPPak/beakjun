#include <iostream>
#include <vector>

int main() {
	int ppl, pyeong, myeong;
	std::vector<int> news(5);
	
	std::cin >> ppl >> pyeong;

	for (int i = 0; i < 5; i++) {
		std::cin >> myeong;
		news[i] = myeong;
	}

	for (int elem : news) {1
		std::cout << elem - ppl * pyeong << " ";
	}
	std::cout << std::endl;

	return 0;
}