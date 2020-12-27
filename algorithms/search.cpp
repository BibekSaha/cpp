#include <iostream>
#include <algorithm>

int main(void) {
  int source[] = { 11, 22, 33, 44, 55, 66, 77, 88, 99 };
  int pattern[] = { 33, 44, 55 };

  int * ptr = std::search(
    source,
    source + 9,
    pattern,
    pattern + 3
  );

  if (ptr == source + 9)
    std::cout << "No match found" << std::endl;
  else
    std::cout << 
      "Match at " << (ptr - source) 
    << std::endl;

  return 0;
}
