#include <iostream>

int main() {
    unsigned int A;
    int B;

    std::cin >> A >> B;

    if(B < 10){
        std::cout << A + B << std::endl;
    }
    else {
        std::cout << "������ �߸��Ǿ����ϴ�" << std::endl;
    }


    return 0;
}
