#include <iostream>

template <typename T>
class set {
    private:
        struct TreeNode {
            T data;
            TreeNode* left;
            TreeNode* right;

            TreeNode() {
                data = 0;
                left = NULL;
                right = NULL;
            }

            TreeNode(T value) {
                data = value; 
                left = NULL;
                right = NULL;
            }
        };

        TreeNode* root;
        int set_size;

        TreeNode* insert_elements(TreeNode* &node, T value) {
            if (node == NULL) {
                return new TreeNode(value);
            }
            if (value < node->data) {
                node->left = insert_elements(node->left, value);
            }
            else if (value > node->data) {
                node->right = insert_elements(node->right, value);
            }
            return node;
        }

        void clear_elements(TreeNode* node) {
            if (node != NULL) {
                clear_elements(node->left);
                clear_elements(node->right);
                delete node;
            }
        }

        TreeNode* erase_elements(TreeNode* &node, T value) {
            if (node == NULL) {
                return node;
            }
            if (value < node->data) {
                node->left = erase_elements(node->left, value);
            }
            else if (value > node->data) {
                node->right = erase_elements(node->right, value);
            }
            else{
                if (node->left == NULL) {
                    TreeNode* temp = node->right;
                    delete node;
                    return temp;
                } else if (node->right == NULL) {
                    TreeNode* temp = node->left;
                    delete node;
                    return temp;
                }
                TreeNode* temp = lower_bound_element(node->right);
                node->data = temp->data;
                node->right = erase_elements(node->right, temp->data);
            }
            return node;
        }

        TreeNode* find_elements(TreeNode* node, T value) {
            if (node == NULL) {
                return node;
            }
            if (value < node->data) {
                return find_elements(node->left, value);
            }
            else if (value > node->data) {
                return find_elements(node->right, value);
            }
            return node;
        }

        TreeNode* lower_bound_element(TreeNode* node) {
            if (node->left == NULL) {
                return node;
            }
            return lower_bound_element(node->left);
        }

        TreeNode* upper_bound_element(TreeNode* node) {
            if (node->right == NULL) {
                return node;
            }
            return upper_bound_element(node->right);
        }

    public:
        set() {
            root = NULL;
            set_size = 0;
        }

        bool empty() {
            return root == NULL;
        }

        int size() {
            return set_size;
        }

        void insert(T value) {
            root = insert_elements(root, value);
            set_size++;
        }

        void clear() {
            clear_elements(root);
            root = NULL;
            set_size = 0;
        }

        void erase(T value) {
            root = erase_elements(root, value);
            set_size--;
        }

        TreeNode* lower_bound(T value) {
            return lower_bound_element(root);
        }

        TreeNode* upper_bound(T value) {
            return upper_bound_element(root);
        }

        ~set() {
            clear();
        }
};

int main() {
    set<int> set_obj;
    set_obj.insert(6);
    set_obj.insert(2);
    set_obj.insert(8);
    set_obj.insert(4);
    set_obj.insert(7);

    std::cout << "Size = " << set_obj.size() << "\n";
    std::cout << "The lower bound = " << set_obj.lower_bound(4)->data << "\n";
    std::cout << "The upper bound = " << set_obj.upper_bound(4)->data << "\n";
    set_obj.erase(8);
    std::cout << "Size = " << set_obj.size() << "\n";

    return 0;
}
