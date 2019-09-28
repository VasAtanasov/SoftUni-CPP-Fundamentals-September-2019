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

int indexOf(const std::vector<int> &array, int element) {
    int indexOf = -1;
    const size_t SIZE = array.size();
    for (size_t i = 0; i < SIZE; ++i) {
        if (array[i] == element) {
            indexOf = i;
            break;
        }
    }
    return indexOf;
}

int main() {
    std::vector<int> array = readIntArray();

    if (array.empty()) {
        std::cout << "-1";
        return 0;
    }
    int element;
    std::cin >> element;
    std::cout << indexOf(array, element);
    return 0;
}