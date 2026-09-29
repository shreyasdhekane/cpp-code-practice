#include <iostream>
// Simple banking app
// Deposit, withdraw, Show Balance
double showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
  double balance = 100.00;
  int n = 0;
  std::cout << "<-------My Bank------->\n";
  std::cout << "Press 1 to Deposit \n";
  std::cout << "Press 2 to Withdraw \n";
  std::cout << "Press 3 to Show Balance\n";
  std::cout << "Press 4 to Exit\n";
  while (n != 4) {
    std::cout << "What would you like to do today?";
    std::cin >> n;

    if (n == 1) {
      balance += deposit();
      std::cout << "Your current balance after deposit is $" << balance << "\n";
    } else if (n == 2) {
      balance -= withdraw(balance);
      std::cout << "Your current balance after withdraw is $" << balance
                << "\n";
    } else if (n == 3) {
      showBalance(balance);
    } else {
      std::cout << "Enter a valid number!";
    }
  }
  return 0;
}
// deposit Function
// ask how much to desposit (double)
// add to orignal balance
double deposit() {
  double amount;
  std::cout << "Enter the amount you want to deposit: ";
  std::cin >> amount;
  return amount;
}
// withdraw function
// ask how much to withdraw(double)
// check if withdraw amout greater then amount in bank
// if yes: subtract from orignal balance
// if no: error "You no money!! Broke"
double withdraw(double balance) {
  double amount;
  std::cout << "Enter the amount you want to withdraw: ";
  std::cin >> amount;
  if (amount > balance) {
    std::cout << "The withdraw amount is greater then the current balance. \n";
    return 0;
  } else {
    return amount;
  }
}
// show balance function
// display balance
double showBalance(double balance) {
  std::cout << "Your Balance is $" << balance << "\n";
  return 0;
}