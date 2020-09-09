#include <iostream>

using namespace std;

class Foo {
  private:
    int bar;
  
  public:
    Foo() {
      this->bar = rand() % 100;
    }

    int getBar() { return this->bar; }

    void setBar(int bar) { this->bar = bar; }
};

int main(void) {
  const int arrSize = 10;

  Foo fooArr[arrSize];

  for (int i = 0; i < arrSize; i++) cout << fooArr[i].getBar() << endl;

  return 0;
}