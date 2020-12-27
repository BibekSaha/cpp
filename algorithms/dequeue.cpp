#include <iostream>
#include <deque>

int main(void) {
  std::deque<int> deq;

  deq.push_back(10);
  deq.push_back(20);
  deq.push_back(30);
  deq.push_back(40);
  deq.push_front(134);
  deq.push_front(155);
  deq.push_back(50);

  deq[3] = 100;

  for (const int value : deq)
    std::cout << value << "  ";
  std::cout << std::endl;

  return 0;
}