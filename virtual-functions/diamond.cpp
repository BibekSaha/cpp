#include <iostream>

using namespace std;

class Parent {
  protected:
    int data = 100;
};

class Child1 : virtual public Parent {};

class Child2 :  virtual public Parent {};

class GrandChild : public Child1, public Child2 {
  public:
    int getData(void) { return this->data; }
};

int main(void) {
  GrandChild gc;

  cout << gc.getData() << endl;

  return 0;
} 