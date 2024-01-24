#include <iostream>

class complex {
		public:
				float real, img;

				complex(float r, float i) {
						real = r;
						img = i;	
				};

				complex operator+ ( complex other) {
						float result1 = real + other.real;
						float result2 = img + other.img;
						std::cout << "Addition: " << result1 << "+" << "("<< result2 << ")" << "i" << "\n";
						return complex(result1,result2);
				}
				complex operator- (complex other) {
						float result1 = real - other.real;
						float result2 = img  - other.img;
						std::cout << "Subtraction: " << result1 << "-" << "("<< result2 << ")" << "i" << "\n";
						return  complex(result1,result2);   
				}
				complex operator* ( complex other) {
						float result1 = real*other.real - img*other.img;
						float result2 = real*other.img  + other.real*img;
						std::cout << "Multiplication: " << result1 << "+" << "("<< result2 << ")" << "i" << "\n";
						return complex (result1,result2);
				}
				complex operator/ (complex other) {
						float result1 = (real*other.real + img*other.img)/(other.real*other.real + other.img*other.img);
						float result2 = (img*other.real - real*other.img)/(other.real*other.real + other.img*other.img);
						std::cout << "Division: " << result1 << "+" << "("<< result2 << ")" << "i" << "\n";
						return complex(result1,result2);
				}

				complex (const complex& other) {
					this->real = other.real;
					this->img  = other.img;
		}
};

int main() {
		float real1, img1, real2, img2;
		std::cout << "Enter Real part: ";
		std::cin >> real1;
		std::cout << "Enter Imaginary Part: ";
		std::cin >> img1;
		std::cout << "The first complex number: " << real1 << "+" << "(" << img1 << ")" << "i" << "\n";
		std::cout << "Enter Real part: ";
		std::cin >> real2;
		std::cout << "Enter Imaginary Part: ";
		std::cin >> img2;
		std::cout << "The second  complex number: " << real2 << "+" << "(" << img2 << ")" << "i" << "\n";
		complex result1 = complex(real1, img1);
		complex result2 = complex(real2, img2);
		complex add = result1 + result2;
		complex res1(result1);
		complex res2(result2);
		complex sub = res1 - res2;
		complex mul = res1*res2;
		complex div = res1 / res2;

		return 0;
}

