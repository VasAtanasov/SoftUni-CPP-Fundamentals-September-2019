#include <iostream>
#include <vector>
#include <sstream>
#include <iterator>

std::string decimalToHexadecimal(int);

void hexToDecimal(std::stringstream &, std::string &, int &, int);

int main() {
    std::string stringOne, stringTwo;
    std::cin >> stringOne >> stringTwo;

    std::vector<std::string> strings;
    strings.emplace_back("#");

    std::stringstream ss;

    const size_t SIZE = stringOne.length();
    for (size_t i = 1; i < SIZE; i += 2) {

        ss.clear();
        int x = 0, y = 0;

        hexToDecimal(ss, stringOne, x, i);
        hexToDecimal(ss, stringTwo, y, i);

        int average = ((x + y) / 2);
        strings.push_back(decimalToHexadecimal(average));
    }

    std::ostringstream ostringstream;
    std::copy(strings.begin(), strings.end(), std::ostream_iterator<std::string>(ostringstream, ""));

    std::cout << ostringstream.str();
    ostringstream.clear();

    return 0;
}

void hexToDecimal(std::stringstream &ss, std::string &string, int &num, int starPos) {
    ss << std::hex << string.substr(starPos, 2);
    ss >> num;
    ss.clear();
}

std::string decimalToHexadecimal(int dec) {
    if (dec < 1) return "00";

    int hex = dec;
    std::string hexStr;

    while (dec > 0) {
        hex = dec % 16;

        if (hex < 10)
            hexStr = hexStr.insert(0, std::string(1, (hex + 48)));
        else
            hexStr = hexStr.insert(0, std::string(1, (hex + 87)));

        dec /= 16;
    }

    return hexStr;
}