#include <iostream>
#include <vector>


void heap(std::vector<int>& array){
    bool sorted = false;
    while(!sorted){
        sorted = true;
        int n = array.size() -1;
        for(int i=array.size()-1; i>=0; i--){
            if(array[i] < array[(i-1)/2]){
                std::swap(array[i],array[(i-1)/2]);
                sorted =false;
            }
        }
    }
}

void heap_sort(std::vector<int> array) {
    int size = array.size();
    std::vector<int> sorted;
    int i = 0;
    while (i < size) {
        sorted.push_back(array[0]);
        std::swap(array[0],array[array.size() - 1]);
        array.pop_back();
        heap(array);
        i++;
    }
    array = sorted;
}

void enter_array(std::vector<int>& array) {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    array.resize(size);

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }
}

void print_array(const std::vector<int>& array) {
    for (int i=0; i< array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << "\n";
}

int main() {
    std::vector<int> array;
    enter_array(array);
    std::cout << "Original array: ";
    print_array(array);
    heap(array);
    std::cout << "Haep: "; 
    heap_sort(array);
    print_array(array);

    std::cout << "Sorted array: ";
    print_array(array);

    return 0;
}