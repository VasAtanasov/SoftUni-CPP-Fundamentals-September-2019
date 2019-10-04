#include <iostream>

int main() {
    std::string stringOne, stringTwo;
    std::getline(std::cin,stringOne);
    std::getline(std::cin,stringTwo);

    if (stringOne == stringTwo) {
        std::cout << "equal";
        return 0;
    }

    std::cout << "not equal";

    return 0;
}