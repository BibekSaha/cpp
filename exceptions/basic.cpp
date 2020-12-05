#include <iostream>

class Foo {
  public:
    class Bar {};

    void func() {
      std::cout << "This is the Foo class" << std::endl;
      if (true) {
        throw Foo::Bar();
      }
    }
};

int main(void) {
  try {
    Foo foo;
    foo.func();
  } catch(Foo::Bar) {
    std::cout << "An error has occurred in the program" << std::endl;
  }

  return 0;
}