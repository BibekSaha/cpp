#include <iostream>

template<typename T, typename S>
S find(const T * array, const T valueToFind, S size) {
  for (S i = 0; i < size; i++) {
    if (array[i] == valueToFind) return i;
  }
  return static_cast<S>(-1);
}

int main(void) {
  int array[] = { 10, 9, 8, 7, 6 };

  std::cout << 
    "8 is at position at " << find<int, int>(array, 8, 5) 
  << std::endl;

  std::string strArray[] = { "A", "devil's", "mind", "is", "workshop" };

  std::cout <<
    "mind is found at position at " << find<std::string, int>(strArray, "is", 5)
  << std::endl;

  return 0;
}
