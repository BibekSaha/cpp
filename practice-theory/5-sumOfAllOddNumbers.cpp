#include <iostream>

using namespace std;

int main(void) {
  int limit, sumOfOddNumbers;

  cout << "Enter the limit: ";
  cin >> limit;

  for (size_t i = 0; i < limit; i++) {
    if (i % 2 == 0) sumOfOddNumbers += i;
  }

  cout << "Sum of all odd numbers are " << sumOfOddNumbers << endl;

  return 0;
}