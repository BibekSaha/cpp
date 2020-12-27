#include <iostream>
#include <algorithm>

int main(void) {
  int arr[] = { 5, 4, 3, 2, 1 };
  int countThree = std::count(arr, arr + 5, 3);
  std::cout << "3 is found " << countThree << std::endl;

  return 0;
}