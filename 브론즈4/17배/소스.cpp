#include <iostream>
#include <vector>
#include <string>

int btod(std::string bin);
std::vector<int> dtob(unsigned long long dec);

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	unsigned long long dec;
	std::string bin;

	std::cin >> bin;

	dec = btod(bin) * 17;

	std::vector<int> result;
	result = dtob(dec);

	auto start = result.rbegin();
	for (start; start != result.rend(); start++)
		std::cout << *start;
	std::cout << std::endl;

	return 0;
}

int btod(std::string bin) {
	int dec = 0;
	int two = 1;
	int jinsu;

	while (!bin.empty()) {
		jinsu = *bin.rbegin() == '0' ? 0 : 1;
		dec += jinsu * two;

		bin.pop_back();
		two *= 2;
	}

	return dec;
}


std::vector<int> dtob(unsigned long long dec) {
	std::vector<int> bin;

	while (dec) {
		bin.push_back(dec % 2);

		dec /= 2;
	}

	return bin;
}