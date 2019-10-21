#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::vector<char>> readMatrix(int rows);

void traverseMatrix(int row, int col, char startChar, char fillChar, std::vector<std::vector<char>> &matrix);

template<typename T>
void printCharMatrix(const std::vector<std::vector<T>> &matrix) {
    for (const auto &row : matrix) {
        for (const auto &item : row) {
            std::cout << item;
        }
        std::cout << std::endl;
    }
}

int main() {
    int rows, cols, startRow, startCol;
    char fillChar, startChar;

    std::cin >> rows >> cols;
    std::cin.ignore();

    std::vector<std::vector<char>> matrix = readMatrix(rows);
    std::cin >> fillChar >> startRow >> startCol;

    startChar = matrix[startRow][startCol];

    traverseMatrix(startRow, startCol, startChar, fillChar, matrix);
    printCharMatrix(matrix);

    return 0;
}

bool inRange(int row, int col, std::vector<std::vector<char>> &matrix) {
    return row >= 0 && row < matrix.size()
           && col >= 0 && col < matrix[col].size();
}

void traverseMatrix(int row, int col, char startChar, char fillChar, std::vector<std::vector<char>> &matrix) {
    if (!inRange(row, col, matrix)) {
        return;
    }

    if (startChar != matrix[row][col]) {
        return;
    }

    matrix[row][col] = fillChar;
    traverseMatrix(row - 1, col, startChar, fillChar, matrix);
    traverseMatrix(row + 1, col, startChar, fillChar, matrix);
    traverseMatrix(row, col - 1, startChar, fillChar, matrix);
    traverseMatrix(row, col + 1, startChar, fillChar, matrix);
}

std::vector<std::vector<char>> readMatrix(int rows) {
    std::vector<std::vector<char>> matrix;

    for (int row = 0; row < rows; ++row) {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream stringStream(line);

        std::vector<char> inputCol;
        char ch;
        while (stringStream >> ch) {
            inputCol.push_back(ch);
        }
        matrix.push_back(inputCol);
    }
    return matrix;
}
