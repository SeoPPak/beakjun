#include <iostream>

int main() {
    unsigned int A;
    int B;

    std::cin >> A >> B;

    if(B < 10){
        std::cout << A + B << std::endl;
    }
    else {
        std::cout << "범위가 잘못되었습니다" << std::endl;
    }


    return 0;
}
