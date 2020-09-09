#include <iostream>

using namespace std;

class Foo {
  private:
    static int count;

  public:
    Foo() {
      count++;
    }

    int getCount() { return this->count; }
};

int Foo::count = 0;

int main(void) {
  Foo f1, f2, f3;

  cout << "Count is " << f1.getCount() << endl; 
  cout << "Count is " << f2.getCount() << endl; 
  cout << "Count is " << f3.getCount() << endl;

  return 0;
}