#include <iostream>

using namespace std;

class A {
  private:
    string privateVar = "Private Varibale";

  protected:
    string protectedVar = "Protected Varible";

  public:
    string publicVar = "Public Variable";
};

class B : public A {
  public:
    void printVars(void) const {
      cout << protectedVar << endl;
      // cout << privateVar << endl; // cannot access private variables
      cout << publicVar << endl;
    }
};

class C : protected A {
  public:
    void printVars(void) const {
      // cout << privateVar << endl; // cannot access private variables
      cout << protectedVar << endl; // Objects of 
      cout << publicVar << endl;
    }
};

class D : private A {
  public:
    void printVars(void) const {
      // cout << privateVar << endl;
      cout << protectedVar << endl;
      cout << publicVar << endl; 
    }
};

int main(void) {
  A a; B b; C c; D d;

  // A
  cout << "A: " << a.publicVar << endl << endl;  

  // B
  cout << "B: " << b.publicVar << endl << endl;

  // C
  // cout << "C: " << c.publicVar << endl; // cannot access public vars when the base class is inherited as protected

  // D
  // cout << "D: " << d.publicVar << endl; // cannot access public vars when the base calss is inherited as private

  return 0;
}