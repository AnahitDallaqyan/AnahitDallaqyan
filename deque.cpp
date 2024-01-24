#include <iostream>

template <typename T>
class Deque {
private:
    T* array; 
    int size;  
    int capacity;

    void loose() {
        int new_capacity = capacity * 2;
        T* new_array = new T[new_capacity];

        for (int i = 0; i < size; ++i) {
            new_array[i] = array[i];
        }

        delete[] array;
        array = new_array;
        capacity = new_capacity;
    }

public:
    Deque() {
        size = 0;
        capacity =4;
        array = new T[capacity];
    }

    void push_back(T value) {
        if (size == capacity) {
           loose();
        }
        array[size++] = value;
    }

    void push_front(T value) {
        if (size == capacity) {
           loose();
        }
        for (int i = size; i > 0; --i) {
            array[i] = array[i - 1];
        }
        array[0] = value;
        size++;
    }

    T pop_back() {
        if (size > 0) {
            return array[--size];
        }
    }

    T pop_front() {
        if (size > 0) {
            T front = array[0];
            for (int i = 0; i < size - 1; ++i) {
                array[i] = array[i + 1];
            }
            size--;
            return front;
        }

    }

    void clear() {
        delete[] array;
        size = 0;
        capacity = 4;
        array = new T[capacity];
    }

    bool empty() const {
        return size == 0;
    }

    int Size() const {
        return size;
    }

    T& front() {
        if (!empty()) {
            return array[0];
        }
    }

    T& back() {
        if (!empty()) {
            return array[size - 1];
        }
    }

    T& at(int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
    }

    T& operator[](int index) {
        return at(index);
    }

    ~Deque() {
        delete[] array;
    }
};

int main() {
    Deque<int> deque_obj;

    deque_obj.push_back(2);
    deque_obj.push_back(6);
    deque_obj.push_back(8);

    std::cout << "Size = " << deque_obj.Size() << "\n";
    std::cout << "Front = " << deque_obj.front() << "\n";
    std::cout << "Back = " << deque_obj.back() << "\n";
    std::cout << "Index 2 = " << deque_obj.at(2) << "\n";
    std::cout << "Index [2]: " << deque_obj[2] << "\n";

    deque_obj.pop_front();
    deque_obj.pop_back();
    std::cout << "Front = " << deque_obj.front() << "\n";
    std::cout << "Back = " << deque_obj.back() << "\n";

    if (deque_obj.empty()) {
        std::cout << "Deque is empty." << "\n";
    } else {
        std::cout << "Deque isn't empty." << "\n";
    }

    std::cout << "Size after pop = " << deque_obj.Size() << "\n";

    deque_obj.clear();

    if (deque_obj.empty()) {
        std::cout << "Clearing is working" << "\n";
    } else {
        std::cout << "Clearing isn't working" << "\n";
    }

    return 0;
}
