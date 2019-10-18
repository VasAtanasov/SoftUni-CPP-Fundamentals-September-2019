#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::vector<int>> readMatrix();

std::vector<std::string> positionOf(const std::vector<std::vector<int>> &matrix, int number);

int main() {
    std::vector<std::vector<int>> matrix = readMatrix();
    int number;
    std::cin >> number;

    std::vector<std::string> positions = positionOf(matrix, number);

    if (positions.empty()) {
        std::cout << "not found" << std::endl;
        return 0;
    }

    for (const auto &item : positions) {
        std::cout << item << std::endl;
    }

    return 0;
}

std::vector<std::vector<int>> readMatrix() {
    size_t rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::vector<int> > inputMatrix;
    for (size_t row = 0; row < rows; row++) {
        std::vector<int> inputRow(cols);
        for (size_t col = 0; col < cols; ++col) {
            std::cin >> inputRow[col];
        }
        inputMatrix.push_back(inputRow);
    }
    return inputMatrix;
}

std::vector<std::string> positionOf(const std::vector<std::vector<int>> &matrix, int number) {
    std::vector<std::string> positions;
    const size_t SIZE = matrix.size();
    for (size_t row = 0; row < SIZE; row++) {
        const size_t ROW_SIZE = matrix[row].size();
        for (size_t col = 0; col < ROW_SIZE; ++col) {
            if (matrix[row][col] == number) {
                std::ostringstream stringStream;
                stringStream << row << " " << col;
                std::string position = stringStream.str();
                positions.push_back(position);
            }
        }
    }

    return positions;
}
