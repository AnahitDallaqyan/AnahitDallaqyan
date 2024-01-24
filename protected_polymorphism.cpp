#include <iostream>
class Point {
		protected:
				float x, y;
		public:
				Point(float x, float y) : x(x), y(y) {}
				virtual void show() {
						std::cout << "The point: " << "(" << x << "," << y << ")" << "\n";
				}
				virtual void area () {}
};
class Circle : public  Point {
		protected:
				size_t r;
		public:
				Circle(float x, float y, size_t r) : Point(x, y), r(r) {}
				void show()  override {
						Point::show();
						std::cout << "R =  " << r << "\n";
				}
				void area() override {
						float s = r * r;
						std::cout << "Area = " << s <<"П"<< "\n";
				}
};
class Rectangle : public Point {
		protected:
				size_t a, b;
		public:
				Rectangle(float x, float y, size_t a, size_t b) : Point(x, y), a(a), b(b) {}
				void show() override {
						Point::show();
						std::cout <<"The sides of rectangle: "  << a << " and " << b << "\n";
				}
				void area() override{
						float s = a * b;
						std::cout << "Area =  " << s << "\n";
				}
};
class RecCircle : public Circle, public Rectangle {
		public:
				RecCircle(float x, float y, size_t a, size_t b, size_t r) : Circle(x, y, r), Rectangle(x, y, a, b) {}
				void show() override {
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
		std::cout << "Enter the R: " << "\n";
		std::cin >> r;
		std::cout << "Enter the sides of the rectangle:\n";
		std::cout << "a: ";
		std::cin >> a;
		std::cout << "b: ";
		std::cin >> b;
		Point* point = NULL;
		Circle* circle = new Circle(x, y, r);
		point = circle;
		point -> show();
		point -> area();
		delete circle;
		Rectangle* rect = new Rectangle(x, y, a, b);
		point = rect;
		point -> show();
		point -> area();
		delete rect;
		return 0;
}


