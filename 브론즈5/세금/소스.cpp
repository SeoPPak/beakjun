#include <iostream>

int main() {
    long win;
    std::cin >> win;

    long gyeong = win * 0.8;

    long one = win * 0.78;
    long sec = gyeong + (win - gyeong) * 0.78;

    std::cout << one << " " << sec << std::endl;

    return 0;
}