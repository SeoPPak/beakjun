#include <iostream>
#include <string>

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int a, b;
	std::cin >> a >> b;

	std::string sachik;

	if ((a >= -10000 && a <= 10000) && (b >= -10000 && b <= 10000)) {
		if (a == b)
			sachik = "==";
		else
			sachik = a > b ? ">" : "<";

		std::cout << sachik << std::endl;
	}

	return 0;
}