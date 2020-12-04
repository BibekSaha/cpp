#include <iostream>

namespace geo {
  const double PI = 3.14159;
  double circumference(double radius) {
    return 2 * PI * radius;
  }
}

int main(void) {
  double circum = geo::circumference(25);

  std::cout << circum << std::endl;
  std::cout << geo::PI << std::endl;

  return 0;
}