#include <iostream>

int f (int x){
    if (x <= 50){
        std::cout << x << " ";
        ++x;
        f(x);
    }
    return 0;
}
int main () {
    int x = 1;
    f(x);
    std::cout << "\n";
    return 0;
}
