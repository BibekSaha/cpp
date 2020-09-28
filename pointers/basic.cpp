#include <iostream>

using namespace std;

int main(void) {
  int number = 100;

  char charValue = 'A';
  char * ptr = &charValue;

  cout << &number << endl;
  cout << &ptr << endl;
  cout << &charValue << endl;

  return 0;
}