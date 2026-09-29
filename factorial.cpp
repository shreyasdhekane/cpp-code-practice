#include <iostream>

int factorial(int n);
int main() {
  int fact, num;
  std::cout << "Enter the number you want factorial for: ";
  std::cin >> num;

  fact = factorial(num);
  std::cout << "The factorial of " << num << " is " << fact;
  return 0;
}

int factorial(int num) {
  int fact = 1;
  for (int i = 1; i <= num; i++) {
    fact *= i;
  }
  return fact;
}