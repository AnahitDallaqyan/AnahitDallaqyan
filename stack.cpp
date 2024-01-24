#include<iostream>
#include"../task1/vector.cpp"

template<typename T>
class Stack {
    private:
        Vector<T> vector_obj;
    public:
        Stack () {}
    void push_back(const T& value) {
        vector_obj.push_back(value);
    }

    void pop_back() {
        vector_obj.pop_back();
    }
    T top() {
        T temp = vector_obj.back();
        return temp;
    }

    ~Stack() {}


};


