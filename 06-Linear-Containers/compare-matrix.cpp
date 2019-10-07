#include <iostream>
#include <vector>
#include <sstream>

std::vector<std::vector<int>> readMatrix();

bool areEqual(const std::vector<std::vector<int>> &matrixOne, const std::vector<std::vector<int>> &matrixTwo);

int main() {
    std::vector<std::vector<int>> matrixOne = readMatrix();
    std::vector<std::vector<int>> matrixTwo = readMatrix();

    if (areEqual(matrixOne, matrixTwo)) {
        std::cout << "equal" << std::endl;
        return 0;
    }

    std::cout << "not equal" << std::endl;

    return 0;
}

std::vector<std::vector<int>> readMatrix() {
    size_t rows;
    std::cin >> rows;
    std::cin.ignore();
    std::vector<std::vector<int> > inputMatrix;
    for (size_t row = 0; row < rows; row++) {
        std::string line;
        std::getline(std::cin, line);

        std::istringstream stringStream(line);

        std::vector<int> inputRow;
        std::string num;
        while (stringStream >> num) {
            inputRow.push_back(stoi(num));
        }
        inputMatrix.push_back(inputRow);
    }
    return inputMatrix;
}

bool areEqual(const std::vector<std::vector<int>> &matrixOne, const std::vector<std::vector<int>> &matrixTwo) {
    const size_t MATRIX_ONE_SIZE = matrixOne.size();
    for (size_t row = 0; row < MATRIX_ONE_SIZE; ++row) {
        const size_t ROW_SIZE = matrixOne[row].size();
        for (int col = 0; col < ROW_SIZE; ++col) {
            if (matrixOne[row][col] != matrixTwo[row][col]) {
                return false;
            }
        }
    }
    return true;
}
