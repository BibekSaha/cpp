#include <iostream>

using namespace std;

class Stack {
  protected:
    enum { MAX = 100 };
    int stack[MAX];
    int top;

    bool isEmpty() { return this->top == 0; }

    bool isFull() { return this->top == MAX - 1; }
  
  public:
    Stack() {
      this->top = -1;
    }

    void push(int data) { this->stack[++this->top] = data; }

    int pop() { return this->stack[this->top--]; }

    void display() {
      if (this->isEmpty()) return;
      for (int i = this->top; i >= 0; i--)
        cout << this->stack[i] << "\t";
      cout << endl;
    }
};

class StackX : public Stack {
  public:
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
};

int main(void) {
  StackX stack;

  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.push(40);
  stack.push(50);
  stack.display();

  stack.pop();
  stack.display();
  stack.pop();
  stack.display();

  stack.pop();
  stack.display();
  stack.pop();
  stack.display();
  stack.pop();
  stack.display();

  return 0;
}