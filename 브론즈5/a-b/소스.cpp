#include <iostream>

int main() {
    unsigned int A, B;
    int result;

    std::cin >> A >> B;

    if (A <= 10 && B <= 10) {
        result = A - B;
        std::cout << result << std::endl;
    }
    else {
        std::cout << "범위가 잘못되었습니다" << std::endl;
    }


    return 0;
}