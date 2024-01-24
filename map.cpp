#include<iostream>

template<typename T, typename K>
class Map {
    private:
        struct Node{
            T key;
            K value;
            Node *right;
            Node *left;

            Node(){
                right = NULL;
                left = NULL;
            }
            Node(T k, K v){
                key = k;
                value = v;
                left = NULL;
                right = NULL;
            }
        };
        Node *root;
        int map_size = 0;

        Node *insert_element(Node * node, T key, K value){
            if(node == NULL){
                return new Node(key,value);
            }
            if(key < node->key){
                node->left = insert_element(node->left, key, value);
            }
            else if (key > node->key){
                node->right = insert_element(node->right, key,value);
            }
            return node;
        }
        void clear_elements(Node * node){
            if(node != NULL){
                clear_elements(node->left);
                clear_elements(node->right);
                delete node;
            }
        }
        Node *find_element(Node *node, T key){
            if (node == NULL || node->key == key) {
                return node;
            }
            if (key < node->key) {
                return find_element(node->left, key);
            } else {
                return find_element(node->right, key);
            }
        }
        Node* erase_element(Node* node, T key) {
            if (node == NULL) {
                return node;
            }

            if (key < node->key) {
                node->left = erase_element(node->left, key);
            } else if (key > node->key) {
                node->right = erase_element(node->right, key);
            }
            map_size--;
            return node;
        }
        Node *lower_bound_element(Node *node) {
            if(node->left == NULL){
                return node;
            }
            return lower_bound_element(node->left);
        }

        Node *upper_bound_element(Node *node) {
            if(node->right == NULL){
                return node;
            }
            return upper_bound_element(node->right);
        }
    public:
        Map (){
            root = NULL;
        }
        void insert(T key, K value){
            root = insert_element(root,key,value);
            map_size++;
        }
        void clear(){
            clear_elements(root);
            root = NULL;
            map_size = 0;
        }
        void erase(T key){
            root = erase_element(root, key);
        }

        bool epmty(){
            return root == NULL;
        }
        int size (){
            return map_size;
        }
        Node *find( T key){
            return find_element(root,key);
        }
        Node *upper_bound(){
            return upper_bound_element(root);
        }
        Node *lower_bound(){
            return lower_bound_element(root);
        }
        ~Map(){
            clear();
        }
};

int main(){
    Map<char,int> map_obj;
    map_obj.insert('a',2);
    map_obj.insert('b',6);
    map_obj.insert('c',8);

    std::cout <<"Size = " << map_obj.size()<<"\n";
    std::cout<<"The lower bound = " << map_obj.lower_bound()->value << "\n";
    std::cout<<"The upper bound = " << map_obj.upper_bound()->value << "\n";
    std::cout<< "Value of 'a' = " << map_obj.find('a')->value << "\n";
    map_obj.erase('b');
    std::cout<< "Size after erase = " << map_obj.size() << "\n";
}
