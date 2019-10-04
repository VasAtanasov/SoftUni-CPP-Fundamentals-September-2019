#include <iostream>
#include <vector>

std::vector<int> readIntArray(int);

int convertToMinutes(int);

int main() {
    int length = 0;
    std::cin >> length;
    std::vector<int> arrivals = readIntArray(length);
    int trainDeparture = 0;
    std::cin >> trainDeparture;
    trainDeparture = convertToMinutes(trainDeparture);

    size_t bestBus = 0;
    int bestDelta = INT32_MAX;
    for (size_t i = 0; i < length; i++) {
        int busArrival = arrivals[i];
        int delta = trainDeparture - busArrival;
        if (delta >= 0 && delta < bestDelta) {
            bestBus = i + 1;
            bestDelta = delta;
        }
    }

    std::cout << bestBus;
    return 0;
}

std::vector<int> readIntArray(int length) {
    std::vector<int> array;
    for (int i = 0; i < length; i++) {
        int num;
        std::cin >> num;
        array.push_back(convertToMinutes(num));
    }
    return array;
}

int convertToMinutes(int time) {
    return ((time / 100) * 60) + (time % 100);
}
