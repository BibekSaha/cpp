#include <iostream>

using namespace std;

class A {
  public:
    int check;

    A(int check = 10) {
      this->check = check;
    }

    void print(void) const { cout << "A and check " << this->check << endl; }
};

class B {
  public:
    int check;

    B(int check = 10) {
      this->check = check;
    }

    void print(void) const { cout << "B and check " << this->check << endl; }
};

// Multiple Inheritance
class C : public A, public B {
  public:
    int check;

    C(int check = 100) : A(check), B() {
      this->check = check;
    }
    // If this method was not given then the `ambiguos error` will occur
    void print(void) const { A::print(); B::print(); }
};

class SomeThing : public string {
  public:
    void print(void) {
      cout << "Just Checking" << endl;
      cout << "String can be inherited!!!!" << endl;
    }
};

int main(void) {
  C c;

  c.A::print();
  c.B::print();
  c.print();

  return 0;
}