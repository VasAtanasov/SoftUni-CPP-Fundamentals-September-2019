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

	for (int i = 0; i < array.size(); i++) {
		for (int j = 0; j < array.size(); j++) {
			std::cout << (array[i] * array[j]) << " ";
		}
	}
}
