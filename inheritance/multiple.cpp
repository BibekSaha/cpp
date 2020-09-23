#include <iostream>

using namespace std;

class A {
  public:
    void print(void) const { cout << "A" << endl; }
};

class B {
  public:
    void print(void) const { cout << "B" << endl; }
};

// Multiple Inheritance
class C : public A, public B {
  public:
    // If this method was not given then the `ambiguos error` will occur
    void print(void) const { A::print(); B::print(); }
};

int main(void) {
  C c;

  c.A::print();
  c.B::print();
  c.print();

  return 0;
}