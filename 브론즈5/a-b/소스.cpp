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
        std::cout << "������ �߸��Ǿ����ϴ�" << std::endl;
    }


    return 0;
}