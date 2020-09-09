#include <iostream>
#include "extern.h"

using namespace std;

void printLocalVar();

int var = 10;

int main(void) {
  extern int outside;
  cout << outside << endl;

  printLocalVar();
  // The global var will be printed not the local one to the printLocalVar() function
  cout << var << endl;

  printHello();
  printWorld();
  return 0;
}

void printLocalVar() {
  int var = 20;
  // The local var will be accessed not the global one
  cout << var << endl;
}

int outside = 123;