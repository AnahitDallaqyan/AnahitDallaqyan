#include <iostream>

int main () {
    int count = 0;
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin  >> n;
    std::cout << "Enter the elements: ";
    int X[n];
    for (int i = 0; i < n; ++i){
        std::cin >> X[i];
    }
    for (int i = 0; i < n - 2; ++i){
        for (int j = i + 1; j < n - 1; ++j){
            for(int k = j + 1; k < n; ++k){
                if (X[j] + X[k] > X[i]
                &&  X[i] + X[k] > X[j]
                &&  X[i] + X[j] > X[k]){
                    count = count + 1;
                }
                
            }
        }
    }
    std::cout << count << "\n";

    return 0; 
}