#include <iostream>
#include <stack>

int sum(std::stack<int> &);

int subtract(std::stack<int> &);

int concat(std::stack<int> &);

void discard(std::stack<int> &);

int getNumber(std::stack<int> &);

void performOperation(std::stack<int> &, std::string &);

void print(std::stack<int> &);

int main() {
    std::stack<int> stack;

    std::string line;
    while (true) {
        std::getline(std::cin, line);
        if (line == "end") {
            break;
        }
        performOperation(stack, line);
    }

    print(stack);

    return 0;
}

void performOperation(std::stack<int> &stack, std::string &line) {
    if (line == "subtract") {
        stack.push(subtract(stack));
    } else if (line == "sum") {
        stack.push(sum(stack));
    } else if (line == "concat") {
        stack.push(concat(stack));
    } else if (line == "discard") {
        discard(stack);
    } else {
        stack.push(stoi(line));
    }
}

int sum(std::stack<int> &stack) {
    return getNumber(stack) + getNumber(stack);
}

int subtract(std::stack<int> &stack) {
    return getNumber(stack) - getNumber(stack);
}

int concat(std::stack<int> &stack) {
    int lastNumber = getNumber(stack);
    if (lastNumber < 0) {
        return lastNumber;
    }
    int beforeLastNumber = getNumber(stack);
    std::string concatenatedNumbers = std::to_string(beforeLastNumber) + std::to_string(lastNumber);
    return std::stoi(concatenatedNumbers);
}

void discard(std::stack<int> &stack) {
    stack.pop();
}

int getNumber(std::stack<int> &stack) {
    int number = stack.top();
    stack.pop();
    return number;
}

void print(std::stack<int> &stack) {
    if (stack.empty()) {
        return;
    }

    int top = stack.top();
    stack.pop();
    print(stack);

    std::cout << top << std::endl;
}