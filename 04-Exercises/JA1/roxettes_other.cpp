#include<iostream>
#include<iomanip>
#include <vector>

int hexSymbolToDecimal(char hex) {
    if (hex >= 'a') {
        return 10 + (hex - 'a');
    } else {
        return hex - '0';
    }
}

int main() {
    const unsigned int NumHexDigitsPerNumber = 5;

    std::vector<char> input(NumHexDigitsPerNumber);

    size_t xorred = 0;

    while (std::cin >> input[0]) {
        if (input[0] == '.') {
            break;
        }

        std::cin >> input[1] >> input[2] >> input[3] >> input[4];

        size_t value = 0;
        for (char i : input) {
            value = value << 4; // this is equivalent to value *= 16;, but works faster than multiplication
            value += hexSymbolToDecimal(i);
        }

        xorred ^= value;
    }

    std::cout << std::hex << std::setfill('0') << std::setw(5) << xorred << std::endl;
}
