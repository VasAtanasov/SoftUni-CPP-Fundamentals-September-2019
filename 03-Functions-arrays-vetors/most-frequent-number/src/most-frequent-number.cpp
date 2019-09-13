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

std::vector<int> initOccurancesVector() {
	std::vector<int> array;
	for (int i = 0; i <= 9; i++) {
		array.push_back(0);
	}
	return array;
}

int main() {
	std::vector<int> array = readIntArray();
	std::vector<int> occurances = initOccurancesVector();

	int maxOccurance = 0;

	for (int i = 0; i < array.size(); i++) {
		int num = array[i];

		occurances[num]++;

		if (occurances[num] > maxOccurance) {
			maxOccurance = occurances[num];
		}
	}

	for (int i = 0; i < occurances.size(); i++) {
		int occurance = occurances[i];

		if (occurance == maxOccurance) {
			std::cout << i << " ";
		}
	}

}
