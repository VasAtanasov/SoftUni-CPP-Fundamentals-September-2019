#include <iostream>
#include <sstream>
#include <vector>

bool isNumber(const std::string &string) {
    const size_t SIZE = string.length();
    for (size_t i = 0; i < SIZE; i++) {
        if (isdigit(string[i]) == 0 && string[i] != '+' && string[i] != '-') {
            return false;
        }
    }
    return true;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stringStream(line);
    std::vector<std::string> invalidInputs;

    size_t sum = 0;
    std::string word;
    while (stringStream >> word) {
        if (isNumber(word)) {
            sum += stoi(word);
        } else {
            invalidInputs.push_back(word);
        }
    }

    std::cout << sum << std::endl;

    for (const auto &input : invalidInputs) {
        std::cout << input << " ";
    }

    return 0;
}