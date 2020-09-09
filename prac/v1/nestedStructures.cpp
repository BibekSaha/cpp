#include <iostream>

using namespace std;

struct foo {
  int number;
  float decimalNumber;
};

struct bar {
  foo foobar;
  int someOtherNumber;
};

int main(void) {
  bar bar1, bar2;

  // Initialization of nested structures
  bar2 = {{ 12, 15.15 }, 20};

  bar1.someOtherNumber = 100;
  bar1.foobar.number = 101;
  bar1.foobar.decimalNumber = 123;

  cout << bar1.someOtherNumber << endl;
  cout << bar1.foobar.number << endl;
  cout << bar1.foobar.decimalNumber << endl << endl;

  cout << bar2.someOtherNumber << endl;
  cout << bar2.foobar.number << endl;
  cout << bar2.foobar.decimalNumber << endl;

  return 0;
}