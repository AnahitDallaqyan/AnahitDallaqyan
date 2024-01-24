#include <iostream>

void arrays(int arr1[], int arr2[], int result[], int N) {
    int i = 0; 
    int j = 0; 
    int k = 0; 

    while (i < N && j < N) {
        if (arr1[i] <= arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < N) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < N) {
        result[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int N;
    std::cout << "Enter the size of array: " << "\n";
    std::cin >> N;

    int arr1[N];
    std::cout << "Enter the elements: "<< "\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr1[i];
    }

    int arr2[N];
    std::cout << "Enter the elements: "<< "\n";
    for (int i = 0; i < N; i++) {
        std::cin >> arr2[i];
    }
    int M = 2 * N;
    int result[M];
    arrays(arr1, arr2, result, N);
   
    std::cout << "Result:" << "\n";
    for (int i = 0; i < M; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << "\n";

    return 0;
}

