#include <iostream>
class Point {
protected:
    float x, y;
    public:
    Point(float x, float y) : x(x), y(y) {}
    void show() {
        std::cout << "The point: " << "(" << x << "," << y << ")" << "\n";
    }
};
class Circle : public  Point {
    protected:
        size_t r;
    public:
        Circle(float x, float y, size_t r) : Point(x, y), r(r) {}
        void show() {
            Point::show();
            std::cout << "R =  " << r << "\n";
        }
        void area() {
            float s = r * r;
            std::cout << "Area = " << s <<"П"<< "\n";
        }
};
class Rectangle : public Point {
    protected:
        size_t a, b;
    public:
        Rectangle(float x, float y, size_t a, size_t b) : Point(x, y), a(a), b(b) {}
        void show() {
            Point::show();
			std::cout <<"The sides of rectangle: "  << a << " and " << b << "\n";
        }
        void area() {
            float s = a * b;
            std::cout << "Area =  " << s << "\n";
        }
};
class RecCircle : public Circle, public Rectangle {
    public:
        RecCircle(float x, float y, size_t a, size_t b, size_t r) : Circle(x, y, r), Rectangle(x, y, a, b) {}
        void show() {
            std::cout << "The Retangel:" << "\n";
            Rectangle::area();
            std::cout << "The Circle:" << "\n";
            Circle::area();
        }
};
int main() {
    float x, y;
    size_t r, a, b;
    std::cout << "Enter the X: \n";
    std::cin >> x;
    std::cout << "Enter the Y: \n";
    std::cin >> y;
    Point my_point(x, y);
    my_point.show();
    std::cout << "Enter the R: " << "\n";
    std::cin >> r;
    Circle my_circle(x, y, r);
    my_circle.show();
    my_circle.area();
    std::cout << "Enter the sides of the rectangle:\n";
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    Rectangle my_rectangle(x, y, a, b);
    my_rectangle.show();
    my_rectangle.area();
    RecCircle my_RecCircle(x, y, a, b, r);
    my_RecCircle.show();
    return 0;
}







