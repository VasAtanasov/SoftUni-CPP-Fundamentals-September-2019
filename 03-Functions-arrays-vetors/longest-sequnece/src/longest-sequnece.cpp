#include <iostream>

int main() {
	int length;
	std::cin >> length;

	if (length == 0) {
		return 0;
	}

	int array[length];
	for (int i = 0; i < length; i++) {
		std::cin >> array[i];
	}

	int element = array[0];
	int longestCount = 1;

	int currentElement = array[0];
	int currentCount = 1;

	for (int i = 1; i < length; i++) {
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
