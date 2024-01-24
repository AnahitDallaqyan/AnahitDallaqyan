#include <iostream>

int sum_of_digits(int num) {
  int sum = 0;
  while (num != 0){
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int num,sum;
  sum = 0;
  std::cout << "Enter the number: ";
  std::cin >> num;
  std::cout << "Sum of digits: " << sum_of_digits(num)<< "\n";
  return 0;
}


