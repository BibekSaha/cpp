#include <iostream>

using namespace std;

long factorial(int);

int main(void) {
  const long fact = factorial(5);

  cout << "Factorial of 5 is " << fact << endl;

  return 0;
}

long factorial(int n) {
  if (n == 0) return 1;
  return n * factorial(n-1);
}