#include <iostream>
#include <vector>
#include <sstream>
#include <queue>
#include <algorithm>
#include <stack>

std::vector<int> readVector();

void populateQueue(std::priority_queue<int> &queue, std::vector<int> &vector);

bool contains(const std::vector<int> &vector, int element);

int main() {
    std::vector<int> firstVector = readVector();
    std::vector<int> secondVector = readVector();

    std::priority_queue<int> queue;

    populateQueue(queue, firstVector);
    populateQueue(queue, secondVector);

    std::stack<char> railcars;
    std::ostringstream stringStream;

    while (!queue.empty()) {
        int element = queue.top();
        stringStream << element << " ";
        queue.pop();

        if (contains(firstVector, element)) {
            railcars.push('A');
        } else {
            railcars.push('B');
        }
    }

    while (!railcars.empty()) {
        std::cout << railcars.top();
        railcars.pop();
    }

    std::cout << std::endl;
    std::string sequence = stringStream.str();
    std::cout << sequence;

    return 0;
}

std::vector<int> readVector() {
    std::vector<int> vector;
    std::string line;
    std::getline(std::cin, line);
    std::istringstream stringStream(line);
    std::string inputString;
    while (stringStream >> inputString) {
        vector.push_back(stoi(inputString));
    }
    return vector;
}

void populateQueue(std::priority_queue<int> &queue, std::vector<int> &vector) {
    for (const auto &item : vector) {
        queue.push(item);
    }
}

bool contains(const std::vector<int> &vector, int element) {
    return std::find(vector.begin(), vector.end(), element) != vector.end();
}
