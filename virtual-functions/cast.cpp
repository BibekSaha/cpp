#include <iostream>
#include <typeinfo>

using namespace std;

class Base {
  protected:
    int ba;

  public:
    Base(int ba = 0) {
      this->ba = ba;
    }

    virtual void vertFunction(void) {}

    void show(void) {
      cout << "Base: ba = " << this->ba << endl;
    }
};

class Derv : public Base {
  private:
    int da;

  public:
    Derv(int ba, int da) : Base(ba) {
      this->da = da;
    }

    void show(void) {
      cout << "Derv: ba = " << this->ba << ", da = " << this-da << endl; 
    }
};

int main(void) {
  Base * pBase = new Base(10);
  Derv * pDerv = new Derv(21, 22);
  pBase = dynamic_cast<Base *>(pDerv);
  pBase->show();

  Base * pBasex = new Derv(31, 32);
  pDerv = dynamic_cast<Derv *>(pBasex);
  pDerv->show();

  return 0;
}