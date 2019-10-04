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

int main() {
	std::vector<int> array = readIntArray();

	if (array.empty()) {
		return 0;
	}

	int element = array[0];
	int longestCount = 1;

	int currentElement = array[0];
	int currentCount = 1;

	for (int i = 1; i < array.size(); i++) {
		int arrayElement = array[i];
		if (arrayElement == currentElement) {
			currentCount++;
		} else {
			currentElement = arrayElement;
			currentCount = 1;
		}

		if (currentCount >= longestCount) {
			element = currentElement;
			longestCount = currentCount;
		}
	}

	for (int i = 0; i < longestCount; i++) {
		std::cout << element << " ";
	}

	return 0;
}
