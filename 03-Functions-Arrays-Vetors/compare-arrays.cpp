#include <iostream>
#include <cmath>
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

int main() {
	std::vector<int> arrayOne = readIntArray();
	std::vector<int> arrayTwo = readIntArray();

	if (arrayOne == arrayTwo) {
		std::cout << "equal";
	} else {
		std::cout << "not equal";
	}

	return 0;
}
