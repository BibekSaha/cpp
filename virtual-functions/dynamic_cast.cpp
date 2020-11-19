#include <iostream>
#include <typeinfo> // needed for dynamic_cast

using namespace std;

class Base {
  virtual void vertFunction() {};
};

class Derv1 : public Base {};

class Derv2 : public Base {};

bool isDerv1(Base * pUnknown) {
  Derv1 * pDerv1; 
  if (pDerv1 = dynamic_cast<Derv1 *>(pUnknown)) return true;
  return false;
}

int main(void) {
  Derv1 * d1 = new Derv1;
  Derv2 * d2 = new Derv2;

  if (isDerv1(d1)) 
    cout << "d1 is a member of Derv1 class" << endl;
  else
    cout << "d1 is not a member of Derv1 class" << endl;

  if (isDerv1(d2))
    cout << "d2 is a member of Derv2 class" << endl;
  else
    cout << "d2 is not a member of Derv2 class" << endl;

  return 0;
}