#include <iostream>

using namespace std;

int main(void) {
  long number, factorial = 1;

  cout << "Enter the number: ";
  cin >> number;

  if (number < 0) {
    cout << "Factorial of negative number is not possible." << endl;
    return 0;
  }

  for (size_t i = 1; i <= number; i++) factorial *= i;

  cout << "Factorial of " << number << " is " << factorial << endl;

  return 0;
}