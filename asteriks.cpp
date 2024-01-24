#include <iostream>

int main() {
    int num;
    std::cout << "Enter the number of: ";
    std::cin >> num;

    for (int i = 1; i <= num; ++i) {
            for (int j = 1; j <= num - i; ++j) {
            std::cout << " ";
        }

        for (int k = 1; k <= 2 * i - 1; ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
