#include <iostream>
#include <vector>
#include <unordered_map>
#include <iomanip>

std::unordered_map<int, int> readInput();

size_t convertCharArrayToString(const std::vector<char> &array);

int main() {
    std::istream::sync_with_stdio(false);
    std::ostream::sync_with_stdio(false);
    std::unordered_map<int, int> numbers = readInput();

    for (const auto &number : numbers) {
        if (number.second == 1) {
            std::cout << std::hex << std::setfill('0') << std::setw(5) << number.first << std::endl;
//            std::cout << number.first;
            return 0;
        }
    }

    return 0;
}

std::unordered_map<int, int> readInput() {
    std::unordered_map<int, int> hexNumbers{};
    std::vector<char> array(5);
    int i = 0;
    while (true) {
        std::cin >> array[i];
        if (array[i] == '.') {
            break;
        }
        ++i;

        if (i % 5 == 0) {
            int hex = convertCharArrayToString(array);

            if (hexNumbers.find(hex) == hexNumbers.end()) {
                hexNumbers[hex] = 0;
            }
            hexNumbers[hex] += 1;
            i = 0;
        }
    }
    return hexNumbers;
}

size_t convertCharArrayToString(const std::vector<char> &array) {
    std::string s;
    for (char c: array) {
        s += c;
    }

    unsigned int x;
    std::stringstream ss;
    ss << std::hex << s;
    ss >> x;
    return x;
}