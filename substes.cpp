#include <iostream>
void f(int* arr, int* temp, int N, int i) {
    if(i == N) {
         std::cout << "{ ";
        for (int i=0; i < N; ++i){
            if (temp[i] != 0){
            std::cout << temp[i] << " ";
        }
    }
          std::cout << "}" << "\n";
          return;
    }
   //temp[i] = 0;
    f(arr, temp, N, i+1 );
    temp[i] = arr[i];
    f(arr, temp, N, i + 1);
}
void sub(int* arr, int N) {
    int* temp = new int[N];
    f(arr, temp, N, 0);
    delete[] temp;
}
int main () {
    int N;
    int i = 0;
    std::cout << "Enter the size: ";
    std::cin >> N;
    int* arr = new int[N];
    std::cout << "Enter the elements: " << "\n";
    for (int i = 0; i < N; ++i) {
        std::cin >> arr[i];
    }
    sub(arr, N);
    delete[] arr;
    return 0;
}
