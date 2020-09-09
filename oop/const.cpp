#include <iostream>

using namespace std;

class foo {
  private:
    int bar;

  public:
    void nonConstFunc() { this->bar = 100; }

    // if a method is defined as const the data members
    // cannot be changed
    void constFunc() const { this->bar = 90; }
};

int main(void) {
  
  return 0;
}