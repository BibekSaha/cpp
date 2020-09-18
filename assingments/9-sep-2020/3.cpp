#include <iostream>

using namespace std;

#define MAX(a, b, c) a > b ? (a > c ? a : c) : (b > c ? b : c)

int main(void) {
  int maxValue = MAX(1, 9, 3);
  cout << maxValue << endl;

  return 0;
}