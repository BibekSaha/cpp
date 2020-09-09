#include <iostream>

using namespace std;

int main(void) {
  int limit, sum = 0;

  cout << "Enter the limit: ";
  cin >> limit;

  for (int i = 1; i <= limit; i+=2) {
    sum += i;
    // prints the current number
    cout << i;
    // if the current number is last skip the + sign
    if (i+1 >= limit) continue;
    // else print the + sign
    cout << " + ";
  }
  cout << " = " << sum << endl;

  return 0;
}