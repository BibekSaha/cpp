#include <iostream>

using namespace std;

void someFunctionName(int &, const int &);

int main(void) {
  int a = 10, b = 25;

  someFunctionName(a, b);

  return 0;
}

void someFunctionName(int &a, int &b) {
  a = 10;
  b = 20;
}