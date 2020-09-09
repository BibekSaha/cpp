#include <iostream>

using namespace std;

int multiply(int, int = 10);

int main(void) {
  int number; 

  cout << "Enter the nubmer: ";
  cin >> number;

  cout << "Multiply " << number << " by 10 is " << multiply(number) << endl;

  return 0;
}

int multiply(int num1, int num2) { return num1 * num2; }