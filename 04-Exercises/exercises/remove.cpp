#include <iostream>
#include <vector>

std::vector<int> readIntArray() {
    std::vector<int> array;
    int length;
    std::cin >> length;
    for (int i = 0; i < length; i++) {
        int num;
        std::cin >> num;
        array.push_back(num);
    }

    return array;
}

void filter(const std::vector<int> &array, int element) {
    for (int num : array) {
        if (num != element) {
            std::cout << num << " ";
        }
    }
}

int main() {
    std::vector<int> array = readIntArray();
    int element;
    std::cin >> element;
    filter(array, element);
    return 0;
}