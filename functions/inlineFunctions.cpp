#include <iostream>

using namespace std;

inline int add(int, int = 10);

int main(void) {
  const int addResult = add(1, 2);
  const int addResultWithDefaultArgs = add(1);

  cout << "1 + 2 = " << addResult << endl;

  cout << "1 + 10 = " << addResultWithDefaultArgs << endl;

  return 0;
}

// Inline functions or lambda functions
inline int add(int num1, int num2) { return num1 + num2; }