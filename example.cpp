#include <iostream>


/*int main () {
    int n,i;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    int ar[n];
    std::cout << "Enter the elements: ";
    for (i=0; i<n; ++i){
    std::cin >> ar[i];
    };
    std::cout << "After:" <<"\n";
    for (i=n-1; i>=0; --i){
        std::cout << ar[i] << " ";
    };
    std::cout << "\n";
    if (ar[n] = ar[i]){
        std::cout << "ok" << "\n";
    }
    return 0;
} */

/*int main () {
    int i,k=0;
    char str[25];
    std::cout << "Enter the string: ";
    std::cin >> str;
    for (i=0; str[i] != '\0'; ++i){
        k++;
    }
    std::cout << "Reverse: ";
    for (i=k-1; i>=0; --i){
        std::cout << str[i];
    };
    std::cout << "\n";
    if(str[25] = str[i]){
     std::cout << "Ok!";
    }
    else {
        std::cout << "This is'nt a palindrome!"<<"\n";
    }
    
    return 0;
}
*/



#include <cstring>

int main() {
    int n;
    std::cout << "Enter the length of the string: ";
    std::cin >> n;

    char* str = new char[n+1];  // Dynamic memory allocation for the string

    std::cout << "Enter the string: ";
    std::cin >> str;

    std::cout << "Reversed string: ";
    for (int i = n-1; i >= 0; --i) {
        std::cout << str[i];
    }
    std::cout << "\n";

    for (int i=0, j=n-1; i<j; ++i , --j){
      if (i >= j){
        std::cout << "This is a palindrome." << "\n";
      }
      else {
        std::cout << "This is not a palindrome." << "\n";

      }
    }

    /*int i = 0;
    int j = n - 1;
    while (i < j && str[i] == str[j]) {
        ++i;
        --j;
    }

    if (i >= j) {
        std::cout << "This is a palindrome." << "\n";
    } else {
        std::cout << "This is not a palindrome." << "\n";
    }
*/
    

 
    return 0;
}


