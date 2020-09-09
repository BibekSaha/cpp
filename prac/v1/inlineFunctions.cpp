#include <iostream>

using namespace std;

inline int add(int, int);

int main(void) {
  cout << "Sum of 3 and 4 is " << add(3, 4) << endl;
  return 0;
}

inline int add(int num1, int num2) { return num1 + num2; }
