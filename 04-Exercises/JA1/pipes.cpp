#include <iostream>
#include <vector>

std::vector<int> readIntArray(int);

int main() {
    int length;
    std::cin >> length;
    std::vector<int> checkup = readIntArray(length);
    std::vector<int> installation = readIntArray(length);

    for(size_t i = 0; i < length; ++i) {
        int lifespan = installation[i] - checkup[i];
        std::cout << (installation[i] / lifespan) << " ";
    }

    return 0;
}

std::vector<int> readIntArray(int length) {
    std::vector<int> array;
    for (int i = 0; i < length; i++) {
        int num;
        std::cin >> num;
        array.push_back(num);
    }
    return array;
}