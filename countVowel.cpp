#include <iostream>

int countVowel(std::string str, int count);
int main() {
  int count = 0;
  std::string str;
  std::cout << "Enter a string: ";
  std::getline(std::cin, str);
  count = countVowel(str, count);
  std::cout << count;
  return 0;
}
// for loop through str len
// count every time there is a vowel
// return int
int countVowel(std::string str, int count) {
  for (const char &ch : str) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
      count++;
    }
  }
  return count;
}