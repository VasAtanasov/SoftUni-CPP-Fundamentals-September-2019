#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

inline bool not_digit(char ch) {
    return !isdigit(ch);
}

std::string remove_digits(const std::string &input) {
    std::string result;
    std::copy_if(input.begin(), input.end(),
                 std::back_inserter(result),
                 not_digit);
    return result;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stringStream(line);

    std::string maxWord;
    std::string word;
    while (stringStream >> word) {
        std::string str = remove_digits(word);

        if (str.length() > maxWord.length()) {
            maxWord = str;
        } else if (str.length() == maxWord.length() && str.compare(maxWord) < 0) {
            maxWord = str;
        }
    }

    if (maxWord.empty()) {
        std::cout << "no noise";
        return 0;
    }

    std::cout << maxWord;

    return 0;
}