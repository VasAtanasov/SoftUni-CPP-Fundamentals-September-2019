#include <iostream>
#include <vector>
#include <cmath>

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

int main() {
	std::vector<int> array = readIntArray();

	if (array.size() <= 1) {
		std::cout << 0;
		return 0;
	}

	int delta = INT32_MAX;

	for (int i = 0; i < array.size(); i++) {
		int currentNum = array[i];
		for (int j = i + 1; j < array.size(); j++) {
			int nextNum = array[j];

			int diff = abs(currentNum - nextNum);

			if (diff < delta) {
				delta = diff;
			}
		}
	}

	std::cout << delta;
	return 0;
}
