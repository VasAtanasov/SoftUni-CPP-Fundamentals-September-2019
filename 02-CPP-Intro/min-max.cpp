#include <iostream>
#include <cmath>
#include <climits>

int main() {
    int n;
    std::cin >> n;

    int min = INT_MAX;
    int max = INT_MIN;

    for(int i = 1; i <= n; i++) {
        int num;
        std::cin >> num;

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    std::cout << min << " " << max;

    return 0;
}
