#include <iostream>
#include <stack>
#include <sstream>

int main() {
    std::stack<std::string> stack;

    std::string line;
    std::string word;

    while (true) {
        std::getline(std::cin,line);
        if (line == "end") {
            break;
        }

        std::istringstream stringStream(line);
        while (stringStream >> word) {
            stack.push(word);
        }
    }


    while (!stack.empty()) {
        std::cout << stack.top() << " ";
        stack.pop();
    }

    return 0;
}