#include <iostream>
#include <algorithm>

int main(void) {
  const double inches[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  double centi[5];

  std::transform(
    inches,
    inches + 5,
    centi,
    [](const double inches) -> double {
      return inches * 2.54;
    }
  );

  for (const double value : centi)
    std::cout << value << std::endl;

  return 0;
}