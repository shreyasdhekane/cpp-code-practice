#include <iostream>

int sumOfDigit(int num);
int main() {
  int num;
  std::cout << "Enter the digit you want to add: ";
  std::cin >> num;
  std::cout << "sum of digit " << sumOfDigit(num);
  return 0;
}
// take input as int
// pass the number
// for loop for each digit
// then add and return int

int sumOfDigit(int num) {
  int add = 0;
  while (num != 0) {
    add += (num % 10);
    num /= 10;
  }
  return add;
}
