#include <iostream>

template <typename T>
class calculator {
		public:
				T num1, num2;
				calculator(T x, T y) {
						num1 = x;
						num2 = y;
				}
				T operator+() {
						return num1 + num2;
				}
				T operator-() {
						return num1 - num2;
				}
				T operator*() {
						return num1 * num2;
				}
				T operator/(T num) {
						return num1 / num2;
				}
				void show (T result) {
						std::cout <<result << "\n";
				}
};

int main() {
		calculator<int> cal(4, 2);
		int result = +cal;
		std::cout << "Addition: " ;
		cal.show(result);
		result = -cal;
		std::cout << "Subtraction: ";
		cal.show(result);
		result = *cal;
		std::cout << "Multiplication: ";
		cal.show(result);
		result = cal/1;
		std::cout << "Division: ";
		cal.show(result);

		return 0;
}

