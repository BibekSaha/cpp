#include <iostream>
#include <vector>

int main(void) {
  const int array[] = { 1, 2, 3, 4, 5 };

  std::vector<int> vectOne(array, array + 5);
  std::vector<int> vectTwo(5);

  vectOne.push_back(10);
  vectOne.push_back(11);
  vectOne.push_back(12);
  vectOne.push_back(13);
  vectOne.push_back(14);

  vectOne[0] = 15;

  vectOne.swap(vectTwo);

  std::cout <<
    "Size of the array: " << vectTwo.size()
  << std::endl << std::endl;

  vectTwo.insert(vectTwo.begin() + 1, 110);
  vectTwo.erase(vectTwo.end() - 1);

  while (!vectTwo.empty()) {
    std::cout << vectTwo.back() << "  ";
    vectTwo.pop_back();
  }
  std::cout << std::endl;

  return 0;
}
