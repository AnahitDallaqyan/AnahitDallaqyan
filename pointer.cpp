#include <iostream>
void swap1 (char **str1, char **str2){
char *str3 = *str1;
*str1 = *str2;
*str2 =str3;
}

void swap2(char* &str1, char* &str2) {
    char* str3 = str1;
    str1 = str2;
    str2 = str3;
}

int main() {
    char test1[] = "Test1";
    char test2[] = "Test2";
    char *str1 = test1;
    char *str2 = test2;
    swap1(&str1, &str2);
    std::cout << str1 << "\n";
    std::cout << str2 << "\n";
    swap2(str1, str2);
    std::cout << str1 << "\n";
    std::cout << str2 << "\n";
    return 0;
}



