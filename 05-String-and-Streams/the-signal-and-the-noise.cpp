#include <iostream>
#include <sstream>
#include <vector>
#include <regex>

int remove_digits(const std::string &input) {
    std::string result;
    std::copy_if(input.begin(), input.end(),
                 std::back_inserter(result),
                 isdigit);
    return stoi(result);
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream stringStream(line);

    int max = INT32_MIN;
    std::string word;
    while (stringStream >> word) {
        int num = remove_digits(word);
        if (num > max) {
            max = num;
        }
    }

    std::cout << max;

    return 0;
}