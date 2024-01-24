#include <iostream>

int main() {
    std::cout << "Enter the string: " << std::endl;
    char str[50];
    std::cin >> str;  // Read a single word

    std::cout << "Duplicate letters: " << std::endl;
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }

    for (int i = 0; i < length; ++i) {
        int count = 1;
        for (int j = i + 1; j < length; ++j) {
            if (str[i] == str[j]) {
                ++count;
            }
        }
        if (count > 1) {
            std::cout << str[i] << " (" << count << ")" << std::endl;
        }
    }

    return 0;
}


