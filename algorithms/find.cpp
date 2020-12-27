#include <iostream>
#include <algorithm>

int main(void) {
  int arr[] = { 5, 4, 3, 2, 1 };
  int * ptr = std::find(arr, arr + 8, 3);
  std::cout << 
    "First object with the value of 3 is found at position " <<
    (ptr - arr) 
  << std::endl;

  return 0;
}