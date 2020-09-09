#include <iostream>

using namespace std;

int add(int num1, int num2) {
  return num1 + num2;
}

int sub(int num1, int num2) {
  return num1 - num2;
}

int mul(int num1, int num2) {
  return num1 * num2;
}

float division(int num1, int num2) {
  return (float) num1 / num2;
}

int main(void) {
  int num1, num2;

  cout << "Enter the two numbers: ";
  cin >> num1 >> num2;

  cout << endl;
  cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
  cout << num1 << " - " << num2 << " = " << sub(num1, num2) << endl;
  cout << num1 << " * " << num2 << " = " << mul(num1, num2) << endl;
  cout << num1 << " / " << num2 << " = " << division(num1, num2) << endl;

  return 0;
}