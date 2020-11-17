#include <iostream>

using namespace std;

class Foo {
  private:
    Foo(Foo &);
    Foo& operator = (Foo &);
  
  public:
    Foo() {}
};

int main(void) {
  Foo bar1, bar2;
  // Foo bar3 = bar1; // this is not allowed

  return 0;
}