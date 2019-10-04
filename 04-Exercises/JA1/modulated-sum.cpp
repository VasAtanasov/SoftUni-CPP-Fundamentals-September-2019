#include <iostream>
#include <vector>

std::vector<std::vector<int>> readMatrix(int, int);

void getModulatedSum(const std::vector<std::vector<int>> &matrix, int rows, int cols, int modulus);

int main() {
    int rows, cols, modulus;
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> matrix = readMatrix(rows, cols);
    std::cin >> modulus;
    getModulatedSum(matrix, rows, cols, modulus);
    return 0;
}

std::vector<std::vector<int>> readMatrix(int rows, int cols) {
    std::vector<std::vector<int>> matrix;
    for (size_t row = 0; row < rows; row++) {
        std::vector<int> inputRow;
        for (size_t col = 0; col < cols; col++) {
            int number;
            std::cin >> number;
            inputRow.push_back(number);
        }
        matrix.push_back(inputRow);
    }
    return matrix;
}

void getModulatedSum(const std::vector<std::vector<int>> &matrix, int rows, int cols, int modulus) {
    for (size_t col = 0; col < cols; col++) {
        int sum = 0;
        for (size_t row = 0; row < rows; row++) {
            sum += matrix[row][col];
        }
        std::cout << (sum % modulus) << " ";
    }
}