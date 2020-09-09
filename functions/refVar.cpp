#include <iostream>

using namespace std;

void swap(int &, int &);

int main(void) {
  int a = 10, b = 15;

  cout << "Before swapping:-" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl << endl;

  swap(a, b);

  cout << "After swapping:-" << endl;
  cout << "a = " << a << endl;
  cout << "b = " << b << endl;

  return 0;
}

void swap(int &num1, int &num2) {
  int temp = num1;
  num1 = num2;
  num2 = temp;
}