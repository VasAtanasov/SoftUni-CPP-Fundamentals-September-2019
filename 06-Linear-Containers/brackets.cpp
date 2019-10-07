#include <iostream>
#include <stack>
#include <vector>

char getClosingBracket(char bracket) {
    switch (bracket) {
        case '(':
            return ')';
        case '[':
            return ']';
        case '{':
            return '}';
        default:
            return -1;
    }
}

bool isBalanced(std::stack<char> &stack, char bracket) {
    if (!stack.empty() && stack.top() == bracket) {
        stack.pop();
        return true;
    }
    return false;
}

bool isOpenBracket(char bracket) {
    return bracket == '(' || bracket == '[' || bracket == '{';
}

bool isBalancedExpression(std::string &brackets) {
    std::stack<char> stack;
    for (char character : brackets) {
        bool isBalancedBracket = true;
        switch (character) {
            case ']':
                isBalancedBracket = isBalanced(stack, '[');
                break;
            case '}':
                isBalancedBracket = isBalanced(stack, '{');
                break;
            case ')':
                isBalancedBracket = isBalanced(stack, '(');
                break;
            default:
                stack.push(character);
        }

        if (!isBalancedBracket) {
            return false;
        }
    }

    return true;
}

bool areCorrectBrackets(const std::string &expression) {
    const size_t SIZE = expression.length();
    for (size_t i = 0; i < SIZE / 2; ++i) {
        char currentBracket = expression[i];
        for (size_t j = i + 1; j < SIZE / 2; ++j) {
            if (!isOpenBracket(expression[j])) {
                break;
            }
            if (currentBracket < expression[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    std::string line;
    std::getline(std::cin, line);

    if (!isBalancedExpression(line)) {
        std::cout << "invalid";
        return 0;
    }

    std::stack<int> indexes;
    std::vector<std::string> expressions;

    const size_t SIZE = line.length();
    for (int i = 0; i < SIZE; i++) {
        if (isOpenBracket(line[i])) {
            indexes.push(i);
        } else if (line[i] == getClosingBracket(line[indexes.top()])) {
            int startIndex = indexes.top();
            indexes.pop();
            std::string expression = line.substr(startIndex, i - startIndex + 1);
            if (!areCorrectBrackets(expression)) {
                std::cout << "invalid";
                return 0;
            }
        }
    }

    std::cout << "valid";

    return 0;
}

