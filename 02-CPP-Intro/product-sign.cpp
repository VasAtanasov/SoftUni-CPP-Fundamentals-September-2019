#include <iostream>
#include <string>

int main() {
    int negCount = 0;
    for (int i = 0; i < 3; i++) {
        std::string num;
        std::cin >> num;

        if (num[0] == '-') {
            negCount++;
        }
    }

    if (negCount % 2 == 0) {
        std::cout << "+";
    } else {
        std::cout << "-";
    }

    return 0;
}
