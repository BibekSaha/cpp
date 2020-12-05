#include <iostream>
#include <limits>

const int MAX = 100;

template <class T>
class Stack {
  private:
    T stack[MAX];
    int top;
  public:
    Stack();
    void push(T);
    T pop();
};

template <typename T>
Stack<T>::Stack() {
  this->top = -1;
}

template <typename T>
void Stack<T>::push(T var) {
  this->stack[++top] = var;
}

template <typename T>
T Stack<T>::pop() {
  if (top == -1) return std::numeric_limits<int>::min();
  return this->stack[top--];
}

int main(void) {
  Stack<float> stack;

  stack.push(10.12f);
  stack.push(12.34f);
  stack.push(34.22f);

  std::cout << 
    "1: " << stack.pop() << std::endl << 
    "2: " << stack.pop() << std::endl << 
    "3: " << stack.pop() 
  << std::endl;

  return 0;
}