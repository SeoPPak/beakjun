#include <iostream>
#include <vector>

bool pandan(std::vector<int> fish, char test);

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::vector<int> fish(4);

	std::cin >> fish.at(0) >> fish.at(1) >> fish.at(2) >> fish.at(3);

	bool test;

	test = pandan(fish, '<');

	if (test)
		std::cout << "Fish Rising" << std::endl;
	else {
		test = pandan(fish, '>');
		if (test)
			std::cout << "Fish Diving" << std::endl;
		else {
			test = pandan(fish, '=');
			
			if (test)
				std::cout << "Fish At Constant Depth" << std::endl;
			else
				std::cout << "No Fish" << std::endl;
		}
	}

	return 0;
}

bool pandan(std::vector<int> fish, char test) {
	bool pand = false;

	for (auto start = fish.begin(); start != fish.end() - 1; start++) {
		bool jogun = test == '<' ? *start < *(start + 1) : (test == '>' ? *start > * (start + 1) : (test == '=' ? *start == *(start + 1) : false));
		if (jogun)
			pand = true;
		else {
			pand = false;
			break;
		}
	}

	return pand;
}