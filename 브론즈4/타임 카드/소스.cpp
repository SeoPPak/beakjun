#include <iostream>
#include <vector>

std::vector<int> workingtime(std::vector<int> a, std::vector<int> b);

int main() {
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	std::ios::sync_with_stdio(false);

	int ch, cm, cs, th, tm, ts;
	std::vector<std::vector<int>> ct;
	std::vector<int> ac, bc, cc, at, bt, ctt;

	ct.push_back(ac); ct.push_back(bc); ct.push_back(cc);
	ct.push_back(at); ct.push_back(bt); ct.push_back(ctt);

	for (int i = 0; i < 3; i++) {
		std::cin >> ch >> cm >> cs >> th >> tm >> ts;

		ct.at(i).push_back(ch); ct.at(i).push_back(cm); ct.at(i).push_back(cs);
		ct.at(i + 3).push_back(th); ct.at(i + 3).push_back(tm); ct.at(i + 3).push_back(ts);
	}

	std::vector<int> wt;
	for (int i = 0; i < 3; i++) {
		wt = workingtime(ct.at(i), ct.at(i + 3));

		std::cout << wt.at(0) << " " << wt.at(1) << " " << wt.at(2) << std::endl;
	}

	return 0;
}

std::vector<int> workingtime(std::vector<int> a, std::vector<int> b) {
	int hour, min, sec;
	std::vector<int> worktime;

	hour = b.at(0) - a.at(0);
	min = b.at(1) - a.at(1);
	sec = b.at(2) - a.at(2);

	if (sec < 0) {
		sec += 60;
		min--;
	}
	if (min < 0) {
		min += 60;
		hour--;
	}

	worktime.push_back(hour);
	worktime.push_back(min);
	worktime.push_back(sec);

	return worktime;
}