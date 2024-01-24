#include <iostream>

int main() {
    int n;
    std::cout << "Enter the length of the string: ";
    std::cin >> n;
    char str[n]; 
    std::cout << "Enter the string: ";
    std::cin >> str;
    std::cout << "Reversed string: ";
    for (int i = n-1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << "\n";

    int i = 0;
    int j = n - 1;
    while (i < j && str[i] == str[j]) {
        ++i;
        --j;
    }

    if (i >= j) {
        std::cout << "This is a palindrome:)" << "\n";
    } else {
        std::cout << "This is not a palindrome:(" << "\n";
    }

        return 0;
}
