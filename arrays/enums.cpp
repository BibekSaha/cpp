#include <iostream>

using namespace std;

int main(void) {
  enum { one, two = 5, three };

  cout << one << two << three << endl;

  return 0;
}