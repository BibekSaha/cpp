#include <iostream>

using namespace std;

class Stack {
  private:
    enum { MAX = 100 };
    int stack[MAX];
    int top;
  
  public:
    Stack() {
      this->top = -1;
    }

    bool isEmpty() { return this->top == 0; }

    bool isFull() { return this->top == MAX - 1; }

    void push(int data) {
      if (isFull()) {
        cout << "STACK OVERFLOW" << endl;
        return;
      }
      this->stack[++this->top] = data;
    }

    int pop() {
      if (isEmpty()) { 
        cout << "STACK UNDERFLOW" << endl;
        return -404; 
      }
      return this->stack[this->top--];
    }

    void display() {
      for (int i = 0; i <= this->top; i++) {
        cout << this->stack[i] << "\t";
      }
      cout << endl;
    }
};

int main(void) {
  Stack stack;

  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.push(50);

  stack.pop();
  stack.pop();

  stack.display();

  return 0;
}