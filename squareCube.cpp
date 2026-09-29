#include <iostream>

int square(int num);
int cube(int num);
int main() {
  int num, squared, cubed;
  std::cout << "Enter a number that you want square/cube of: ";
  std::cin >> num;
  squared = square(num);
  cubed = cube(num);
  std::cout << "The square of " << num << " is " << squared << "\n";
  std::cout << "The cube of " << num << " is " << cubed << "\n";

  return 0;
}

int square(int num) {
  int square;
  square = num * num;
  return square;
}

int cube(int num) {
  int cube;
  cube = num * num * num;
  return cube;
}
