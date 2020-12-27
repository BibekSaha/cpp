#include <iostream>
#include <list>

void print(std::list<int> &);

int main(void) {
  std::list<int> iList;
  std::list<int> pList;

  for (int i = 0; i < 5; i++)
    pList.push_back(i + 5 * 3);

  iList.push_back(10);
  iList.push_back(15);
  iList.push_back(20);
  iList.push_back(25);

  const int size = iList.size();

  for (int i = 0; i < size; i++) {
    std::cout << iList.front() << "  ";
    iList.pop_front();
  }
  std::cout << std::endl;

  iList.reverse();
  iList.merge(pList);

  // Removes the duplicates from the list
  iList.unique();

  std::cout << 
    std::endl << "The list is the following:-" 
  << std::endl;
  print(iList);

  return 0;
}

void print(std::list<int> & iList) {
  for (const auto value : iList)
    std::cout << value << "  ";
  std::cout << std::endl;
}
