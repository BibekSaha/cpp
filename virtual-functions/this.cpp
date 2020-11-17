#include <iostream>

using namespace std;

class Foo {
  public:
    void print(void) { cout << this << endl; }
};

int main(void) {
  Foo foo, bar;

  foo.print();
  bar.print();

  return 0;
}