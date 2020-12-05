#include <iostream>

// template <class T>
template <typename T>
T abs(T number) {
  return number < 0 ? -number : number;
}

int main(void) {
  int intNum1 = 5, intNum2 = -10;
  long longNum1 = 7000L, longNum2 = -83443L;
  double doubleNum1 = 123.12, doubleNum2 = 3455.7888;

  std::cout << 
    "abs(" << intNum1 << ") = " << abs<int>(intNum1) << std::endl <<
    "abs(" << intNum2 << ") = " << abs(intNum2) << std::endl <<
    "abs(" << longNum1 << ") = " << abs<long>(longNum1) << std::endl << 
    "abs(" << longNum2 << ") = " << abs(longNum2) << std::endl <<
    "abs(" << doubleNum1 << ") = " << abs<double>(doubleNum1) << std::endl <<
    "abs(" << doubleNum2 << ") = " << abs(doubleNum2) 
  << std::endl;
  return 0;
}