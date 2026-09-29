#include <iostream>

std::string reverseString(std::string str);
int main() {
  std::string str, revStr;
  std::cout << "Enter the string: ";
  std::cin >> str;
  revStr = reverseString(str);
  (str.compare(revStr) == 0)
      ? std::cout << "The entered string is a Palindrome."
      : std::cout << "The entered string is not a Palindrome.";
  return 0;
}

// ask for a string
// reverse a string
// compare the string

std::string reverseString(std::string str) {
  std::string revStr, temp;
  temp = str;
  for (int i = 0; i < str.length(); i++) {
    revStr += temp.back();
    temp.pop_back();
  }
  return revStr;
}
