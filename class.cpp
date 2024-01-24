#include <iostream>
#include <string.h>
struct car {
	char* model;
	float speed;
	char* color;
	size_t price;
    void print () {
    std::cout << model << "\n";
    std::cout << speed << "\n";
    std::cout << color << "\n";
    std::cout << price << "\n";
    }
    car () {
    model = new char[10];
    color = new char[10];
    float  speed;
    size_t price;
    }
    car (const char* car_model, float car_speed,const char* car_color, size_t car_price) {
        model = strdup(car_model);
        speed = car_speed;
        color = strdup(car_color);
        price = car_price;
    };
    ~car () {
        delete [] model;
        delete [] color;
    }
};
	int main () {
car my_car = car("Tesla", 1.6, "black", 10000);
my_car.print();
return 0;
}
