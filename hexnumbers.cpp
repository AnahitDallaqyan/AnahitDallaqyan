#include <iostream>

void hex(int num) {
    int demical = num;
    char digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int length = 0;
    int num_l[20];

    while (num != 0) {
        int k = num % 16;
        num_l[length] = k;
        num /= 16;
        length++;
    }

    char hex[length];
    for (int i = 0; i < length; i++) {
        hex[i] = digits[num_l[length - i - 1]];
    }

    std::cout << demical << " = ";
    for (int i = 0; i < length; i++) {
        std::cout << hex[i];
    }
    std::cout << "\n";
}

int main() {
    int num;
    std::cout << "Enter the decimal number: ";
    std::cin >> num;
    hex(num);
    return 0;
}
