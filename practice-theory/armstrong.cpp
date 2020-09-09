#include <iostream>
#include <cmath>

using namespace std;

int numberOfDigits(int number) {
  if (number == 0) return 1;
  number = number < 0 ? -number : number;
  int digits = 0;
  while (number > 0) {
    digits++;
    number /= 10;
  }
  return digits;
}

int isArmstrong(int number) {
  int copy = number, digits = numberOfDigits(number), armstrong = 0;
  for (size_t i = 0; i < digits; i++) {
    cout << pow(copy % 10, digits) << endl;
    armstrong += pow(copy % 10, digits);
    cout << armstrong << endl;
    copy /= 10;
  }
  return armstrong;
}

int main(void) {
  cout << isArmstrong(153);
  return 0;
}