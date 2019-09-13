#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cin >> a >> b >> c;

    double discriminate = std::pow(b, 2) - (4.0 * a * c);

    if (discriminate < 0) {
        std::cout << "no roots";
        return 0;
    }

    if (discriminate == 0) {
        double root = -b / (2 * a);
        std::cout << root;
        return 0;
    }

    double rootOne = (-b + std::sqrt(discriminate)) / (2.0 * a);
    double rootTwo = (-b - std::sqrt(discriminate)) / (2.0 * a);

    std::cout << rootOne << " " << rootTwo;

    return 0;
}
