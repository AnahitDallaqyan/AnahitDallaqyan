#include <iostream>

template <typename T>
class List
{
    private:
        struct node
        {
            T data;
            node *next = NULL;
            node *previous = NULL;
        };

        node *head = NULL;
        node *last = NULL;
        int size = 0;

    public:
        List (){}
        List(const List &value){

            node *ptr = value.head;
            while (ptr != NULL){
                node *newNode = new node;
                newNode->data = ptr->data;

                if (last != NULL){
                    last->next = newNode;
                    newNode->previous = last;
                }
                else{
                    head = newNode;
                }
                last = newNode;
                size++;

                ptr = ptr->next;
            }
        }

        node *begin() { return head; }
        node *end() { return last; }
        void push_back(const T &value){
            node *newNode = new node;
            newNode->data = value;
            if (head != NULL){
                last->next = newNode;
                newNode->previous = last;
            }
            else{
                head = newNode;
                last = newNode;
            }
            size++;
        }

        void push_front(const T &value){
            node *newNode = new node;
            newNode->data = value;

            if (head != NULL){
                newNode->next = head;
                head->previous = newNode;
            }
            else{
                last = newNode;
            }
            head = newNode;
            size++;
        }
        void pop_back() {
            if (last != NULL){
                if (last->previous != NULL){
                    last = last->previous;
                    delete last->next;
                    last->next = NULL;
                }
                else{
                    delete last;
                    head = last = NULL;
                }
                size--;
            }
        }
        void pop_front(){
            if (head != NULL){
                node *ptr = head->next;
                delete head;
                head = ptr;
            }
            if (head != NULL){
                head->previous = NULL;
                size--;
            }
        }
        void remove(const T &value){
            node *ptr = head;
            while (ptr != NULL) {
                if (ptr->data == value){
                    if (ptr->previous != NULL){
                        ptr->previous->next = ptr->next;
                    }
                    else {
                        head = ptr->next;
                    }

                    if (ptr->next != NULL) {
                        ptr->next->previous = ptr->previous;
                    }
                    else{
                        last = ptr->previous;
                    }

                    delete ptr;
                    size--;
                }
                ptr = ptr->next;
            }
        }
        void print_list(){
            node *start = head;
            while (start != NULL){
                std::cout << start->data << " ";
                start = start->next;
            }
            std::cout << "\n";
        }

        bool empty() {
            if (head == nullptr){
                return true;
            }
            return false;
        }
        int Size() { return size; }
        ~List(){
            while (head != NULL){
                node *temp = head;
                head = head->next;
                delete temp;
            }
        }
};
int main() {
    List<int> List_obj;
    List_obj.push_back(2);
    List_obj.push_back(6);
    List_obj.push_back(8);
    List_obj.print_list();
    List_obj.push_front(4);

    List_obj.print_list(); 
    List_obj.remove(6);
    List_obj.print_list();
    if(List_obj.empty()){
        std::cout << "This List is empty." << "\n";
    }
    else{
        std::cout << "This List is'nt empty." << "\n";
    }
    int listSize = List_obj.Size();
    std::cout << "List size =  " << listSize << "\n";
    List_obj.pop_front();
    List_obj.pop_back();
    List_obj.print_list(); 

    return 0;
}


