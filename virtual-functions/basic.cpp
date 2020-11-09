#include <iostream>

using namespace std;

class Base {
  public:
    virtual void show() {
      cout << "Base" << endl;
    }

    // virtual destructors is needed in the base class
    virtual ~Base() {
      cout << "The object is destroyed" << endl;
    }

    // this makes the class abstract
    virtual void display() = 0; // pure virtual functions
};

class Derv1 : public Base {
  public:
    void show() {
      cout << "Derv1" << endl;
    }

    void display(void) { cout << "Inside of Derv1" << endl;}
};

class Derv2 : public Base {
  public:
    void show() {
      cout << "Derv2" << endl;
    }

    void display(void) { cout << "Inside of Derv2" << endl; }
};

int main(void) {
  Derv1 dv1;
  Derv2 dv2;
  Base * ptr;

  ptr = &dv1;
  ptr->show();

  ptr = &dv2;
  ptr->show();

  cout << "***** End of Program *****" << endl;

  return 0;
}