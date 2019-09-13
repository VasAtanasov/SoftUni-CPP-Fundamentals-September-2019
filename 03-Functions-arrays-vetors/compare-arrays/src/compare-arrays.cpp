#include <iostream>
#include <cmath>


bool areEqual(int arr1[], int length1, int arr2[], int length2) {
	if (length1 != length2) {
		return false;
	}

	for (int i = 0; i < length1; i++) {
		if (arr1[i] != arr2[i]) {
			return false;
		}
	}

	return true;
}

int main() {
	int firstMaxLength;
	std::cin >> firstMaxLength;
	int arrayOne[firstMaxLength];
	for (int i = 0; i < firstMaxLength; i++) {
		std::cin >> arrayOne[i];
	}

	int secondMaxLength;
	std::cin >> secondMaxLength;
	int arrayTwo[secondMaxLength];
	for (int i = 0; i < secondMaxLength; i++) {
		std::cin >> arrayTwo[i];
	}

	if (areEqual(arrayOne, firstMaxLength, arrayTwo,secondMaxLength)) {
		std::cout << "equal";
	} else {
		std::cout << "not equal";
	}

	return 0;
}
