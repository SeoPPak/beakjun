#include <iostream>
#include <bitset>
#include <vector>

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int num;

	std::cin >> std::oct >> num;


	int zari = 0;
	int i = 1;
	while (num / i >= 1) {
		i *= 10;
		zari += 1;
	}

	std::vector<int> twozinsu;
	int rest, mok;

	for (num; num >= 2; num /= 2) {
		rest = num % 2;
		mok = num / 2;

		twozinsu.push_back(rest);
	}

	if (mok = 1)
		twozinsu.push_back(mok);

	while (*twozinsu.rbegin() != 1)
		twozinsu.pop_back();


	std::vector<int> reverse;

	for (auto i = twozinsu.end(); i != twozinsu.begin(); i--) {
		reverse.push_back(*i);
	}

	for (int relem : reverse)
		std::cout << relem;
	std::cout << std::endl;


	return 0;
}