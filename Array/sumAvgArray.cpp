#include <iostream>

int sumOfArray(int arr[], int size);

int main() {
  int arraySum = 0;
  int arr[5];
  std::cout << "Enter the digit in array\n";
  for (int i = 0; i < 5; i++) {
    std::cin >> arr[i];
  }
  int size = sizeof(arr) / sizeof(arr[0]);
  arraySum = sumOfArray(arr, size);
  double arrayAvg = double(arraySum) / size;

  std::cout << "Sum of array is: " << arraySum << "\n";
  std::cout << "Average of array is: " << arrayAvg;
  return 0;
}

int sumOfArray(int arr[], int size) {
  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}
