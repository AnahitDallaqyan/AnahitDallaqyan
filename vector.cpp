#include<iostream>

template <typename T>

class Vector {
    private:
        T* array;
        size_t size;
        size_t capacity;

    public:
        Vector() {
            capacity = 1;
            array = new T[1];
            size = 0;
        }
        void push_back(T element) {
            if (size == capacity) {
                capacity = capacity*2;
                T* newarray = new T[capacity];

                for(size_t i=0; i<size; i++){
                    newarray[i] = array[i];
                }
                delete []array;
                array = newarray;
                newarray =NULL;
            }
            array[size++] = element;
        }
        T pop_back () {
            array[size] = NULL;
            return array[--size];
        }
        void insert(int index, T element) {
            if (size == capacity) {
                capacity = capacity * 2;
                T* newarray = new T[capacity];

                for (size_t i = 0; i < index; i++) {
                    newarray[i] = array[i];
                }

                newarray[index] = element;

                for (int i = index; i < size; i++) {
                    newarray[i + 1] = array[i];
                }

                delete[] array;
                array = newarray;
                newarray = NULL;
            }
            else{
                for (int i = size; i > index; i--) {
                    array[i] = array[i - 1];
                }

                array[index] = element;
            }

            ++size;
        }

        void erase(int index) {
            for (int i = index; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }

            --size;
        }
        void clear() {
            delete[] array;
            size = 0;
            capacity = 1;
            array = new T[1];
        }
        T& operator[](int index){
            if (index >= 0 && index < size)
            {
                return array[index];
            }
        }

        T at (int element) {
            if (element < size){
                return array[element];
            }
            return 0; 
        }
        T front () {
            return array[0];
        }
        T back () {
            return array[size-1];
        }
        int Size(){
            return size;
        }   
        ~Vector() {
            delete[] array;
        }     
};
int main() {
    Vector<int> your_vector;

    your_vector.push_back(2);
    your_vector.push_back(6);
    your_vector.push_back(8);

    std::cout << "Index [0]: " << your_vector[0] << "\n";
    std::cout << "Index [1]: " << your_vector[1] << "\n";
    std::cout << "Index [2]: " << your_vector[2] << "\n";

    std::cout << "Front element: " << your_vector.front() << "\n";
    std::cout << "Back element: " << your_vector.back() << "\n";

    your_vector.insert(1, 4);

    std::cout << "\tAfter changing:\n";
    std::cout << "Index [0]: " << your_vector[0] << "\n";
    std::cout << "Index [1]: " << your_vector[1] << "\n";
    std::cout << "Index [2]: " << your_vector[2] << "\n";
    std::cout << "Index [3]: " << your_vector[3] << "\n";

    your_vector.pop_back();
    std::cout << "\tAfter deleting:\n";
    std::cout << "Index [0]: " << your_vector[0] << "\n";
    std::cout << "Index [1]: " << your_vector[1] << "\n";
    std::cout << "Index [2]: " << your_vector[2] << "\n";

    your_vector.clear();

    return 0;
}
