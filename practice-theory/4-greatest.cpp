#include <iostream>

using namespace std;

int main(void) {
  int number1, number2;

  cout << "Enter the first number: ";
  cin >> number1;

  cout << "Enter the second number: ";
  cin >> number2;

  int greatest = number1 > number2 ? number1 : number2;

  cout << "\nGreatest between the two numbers is " << greatest << endl;

  return 0;
}