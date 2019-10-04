#include <iostream>
#include <sstream>

int main() {
    std::string line;
    getline(std::cin, line);

    std::istringstream stringStream(line);

    std::string word;
    while (stringStream >> word) {

        word[0] = toupper(word[0]);
        const size_t SIZE = word.length();
        for (size_t i = 1; i < SIZE; ++i) {
            if (!std::isalpha(word[i])) {
                word[i + 1] = toupper(word[i + 1]);
            }
        }

        std::cout << word << " ";
    }

    return 0;
}