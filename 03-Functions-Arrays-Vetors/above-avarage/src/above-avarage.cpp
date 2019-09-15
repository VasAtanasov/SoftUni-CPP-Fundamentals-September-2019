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

int getAverage(std::vector<int> &array) {
	int sum = 0;
	for (int i = 0; i < array.size(); i++) {
		sum += array[i];
	}
	return sum / array.size();
}

void printAboveAverage(std::vector<int> &array,int average) {
	for (int i = 0; i < array.size(); i++) {
		if (array[i] >= average) {
			std::cout << array[i] << " ";
		}
	}
}

int main() {
	std::vector<int> array = readIntArray();
	int average = getAverage(array);
	printAboveAverage(array,average);
}


