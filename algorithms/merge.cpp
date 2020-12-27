#include <iostream>
#include <algorithm>

int main(void) {
  int arrayOne[] = { 1, 2, 3, 4, 5, 6, 7 };
  int arrayTwo[] = { 8, 9, 10 };
  int mergedArray[10];

  std::merge(
    arrayOne,
    arrayOne + 7,
    arrayTwo,
    arrayTwo + 3,
    mergedArray
  );

  for (int value : mergedArray)
    std::cout << value << std::endl;

  return 0;
}
