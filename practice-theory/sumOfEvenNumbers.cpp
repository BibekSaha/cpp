#include <iostream>

using namespace std;

int main(void) {
  int limit, sum = 0;

  cout << "Enter the limit: ";
  cin >> limit;

  for (size_t i = 0; i <= limit; i++) {
    if (i % 2 == 0) sum += i;
  }

  cout << "The sum is " << sum << endl;
  
  return 0;
}