// Shows how to use passing reference to a function
#include <iostream>

using namespace std;

int global = 10;

int & giveRef();

int main(void) {
  giveRef() = 100;

  cout << global << endl;

  return 0;
}

int & giveRef() { return global; }