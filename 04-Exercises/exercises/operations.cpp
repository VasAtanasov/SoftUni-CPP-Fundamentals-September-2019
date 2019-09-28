#include <iostream>

int result(int left_operand, int right_operand, char operation) {
    switch (operation) {
        case '+':
            return left_operand + right_operand;
        case '-':
            return left_operand - right_operand;
        case '*':
            return left_operand * right_operand;
        case '/':
            return left_operand / right_operand;
    }
}

int main() {
    int left_operand, right_operand;

    std::cin >> left_operand >> right_operand;

    while (true) {
        char operation;
        std::cin >> operation;
        switch (operation) {
            case '+':
            case '-':
            case '*':
            case '/':
                std::cout << result(left_operand, right_operand, operation);
                return 0;
            default:
                std::cout << "try again\n";
        }
    }

    return 0;
}