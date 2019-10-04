#include <iostream>

int main() {
    std::string line, searchedValue, replaceValue;
    std::getline(std::cin, line);
    std::cin >> searchedValue >> replaceValue;

    int index = line.find(searchedValue);
    const size_t SIZE = searchedValue.length();
    while (index != -1) {
        line.replace(index, SIZE, replaceValue);
        index = line.find(searchedValue);
    }

    std::cout << line;

    return 0;
}