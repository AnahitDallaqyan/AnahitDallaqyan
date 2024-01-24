#include<iostream>
#include"../task1/vector.cpp"

template<typename T>
class Queue {
    private:
        Vector<T> vector_obj;

    public:
        Queue () {}

        bool empty() {
            return vector_obj.empty();
        }

        void push (const T &value) {
            vector_obj.push_back(value);
        }

        void pop(){
            if(vector_obj.Size() > 0){
                vector_obj.erase(0);
            }
        }

        int size() {
            return vector_obj.size();
        }

        T& front() {
            return vector_obj.front();
        }

        T& back() {
            return vector_obj.back();
        }
        ~Queue() {}
};

