#include <iostream>
#include <stack>

int main() {
    size_t count = 0;

    std::string line;
    std::getline(std::cin, line);

    const size_t SIZE = line.length();
    for (size_t i = 0; i < SIZE; ++i) {
        char ch = line[i];
        if (ch == '(') {
            count++;
        } else if (ch == ')') {
            count--;
        }
    }

    if (count == 0) {
        std::cout << "correct";
        return 0;
    }

    std::cout << "incorrect";

    return 0;
}