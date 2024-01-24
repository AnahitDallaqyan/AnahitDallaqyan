/*#include <iostream>
#include <cstring>
char * strtok ( char * str, const char* delimiter ){
    char* dynamic = new char[100];
    strcpy(dynamic, str);
    static int index = 0;
    while ( dynamic[index] != '\0'){
        if (dynamic[index] == delimiter[0]){
            std::cout << "\n";
            ++index;
            break;
        }
        else {
            std::cout << dynamic[index];
        }
        ++index;
    }
    delete [] dynamic;
    return 0;
}
int main() {
    char str[20];
    std::cout << "Enter the string: " << "\n";
    std::cin.getline(str, 20);
    char delimiter[2];
    std::cout << "Enter the delimiter: " << "\n";
    std::cin.getline(delimiter,2);
    int length = 0;
    while ( str[length] != '\0'){
        strtok(str, delimiter);
        ++length;
    }
	std::cout << "\n";
    return 0;
}*/
#include <iostream>

char* strtok(char* str, const char* delimiter) {
    static int index = 0;
    
    while (str[index] != '\0') {
        if (str[index] == delimiter[0]) {
            std::cout << '\n';
            ++index;
            break;
        }
        else {
            std::cout << str[index];
        }
        ++index;
    }
    
    return nullptr;
}

int main() {
    const int MAX_SIZE = 100;
    char str[MAX_SIZE];
    std::cout << "Enter the string: " << '\n';
    std::cin.getline(str, MAX_SIZE);
    
    char delimiter[2];
    std::cout << "Enter the delimiter: " << '\n';
    std::cin.getline(delimiter, 2);
   
    int size = 0;
    while (str[size] != '\0') {
        char* dynamic = new char[2];
        dynamic[0] = str[size];
        strtok(dynamic, delimiter);
        ++size;
        delete[] dynamic;
    }

    
    return 0;
}

