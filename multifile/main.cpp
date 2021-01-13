#include <iostream>
#include "include/custom/function.h"

int main(void) {
  std::cout << 
    "25 + 15 = " << custom::add(25, 15)
  << std::endl;
  return 0;
}
