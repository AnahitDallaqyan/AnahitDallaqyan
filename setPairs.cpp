#include <iostream>
#include <map>
#include <vector>

int main() {
    std::map<int, std::string> numbers;
    std::vector<std::string> letters;
    int n, number;
    std::string letter;

    std::cout << "Enter the number of elements : ";
    std::cin >> n;

    std::cout << "Enter the numbers : ";
    for (int i = 0; i < n; i++) {  
        std::cout << "Number" << i + 1 << ": ";
        std::cin >> number;
        numbers[number] = "Number"; 
    }

    std::cout << "Enter the letters: ";
    for (int i = 0; i < n; i++) { 
        std::cout << "Letter" << i + 1 << ": ";
        std::cin >> letter;
        letters.push_back(letter); 
    }

    std::vector<std::string> combinedVector;

    for (const auto& pair : numbers) {
        combinedVector.push_back(pair.second + std::to_string(pair.first));
    }

    for (const std::string& element : letters) {
        combinedVector.push_back(element);
    }

    std::cout << "Combined elements in the vector: ";
    for (const std::string& element : combinedVector) {
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}
