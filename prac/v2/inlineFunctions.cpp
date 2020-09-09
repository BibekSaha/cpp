#include <iostream>

using namespace std;

inline int add(int, int);

int main(void) {
  int num1, num2;

  cout << "Enter the first number: ";
  cin >> num1;

  cout << "Enter the second number: ";
  cin >> num2;

  cout << endl << num1 << " + " << num2 << " = " << add(num1, num2) << endl;

  return 0;
}

inline int add(int num1, int num2) { return num1 + num2; }