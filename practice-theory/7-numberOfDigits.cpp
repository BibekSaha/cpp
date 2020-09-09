#include <iostream>
#include <cmath>

using namespace std;

int numberOfDigits(int number) {
  if (number == 0) return 1;
  number = abs(number);
  int digits = 0;
  while (number > 0) {
    digits++;
    number /= 10;
  }
  return digits;
}

int sumOfDigits(int number) {
  number = abs(number);
  int sum = 0;
  while (number > 0) {
    sum += number % 10;
    number /= 10;
  }
  return sum;
}

int productOfDigits(int number) {
  number = abs(number);
  int product = 1;
  while (number > 0) {
    product *= number % 10;
    number /= 10;
  }
  return product;
}

int main(void) {
  int number;

  cout << "Enter the number: ";
  cin >> number;

  cout << number << " contains " << numberOfDigits(number) << " digits." << endl;

  cout << "Sum of digits is " << sumOfDigits(number) << endl;

  cout << "Product of digits is " << productOfDigits(number) << endl;

  return 0;
}