#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
  virtual void vertFunc() {}
};

class Derv1 : public Base {};

class Derv2 : public Base {};

void displayName(Base * unknown) {
  cout << "pointer to an object of ";
  cout << typeid(*unknown).name() << endl;
}

int main(void) {
  Base * pDerv1 = new Derv1();
  Base * pDerv2 = new Derv2();

  displayName(pDerv1);
  displayName(pDerv2);

  return 0;
}