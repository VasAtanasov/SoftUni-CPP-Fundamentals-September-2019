#include <iostream>

int main() {

    int numOne, numTwo;
    std::cin >> numOne >> numTwo;

    if (numOne > numTwo) {
        std::cout << numTwo << " " << numOne;
    } else {
        std::cout << numOne << " " << numTwo;
    }

    return 0;
}
