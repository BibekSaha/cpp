#include <iostream>

using namespace std;

// class Foo {
//   private:
//     int bar;

//   public:
//     static int data;

//     Foo(int bar = 0) {
//       this->bar = bar;
//     }

//     static int getData(void) { return Foo::data; } 
// };

// int Foo::data = 100;

void showMe(void) {
  cout << "This function is available globally" << endl;
}

class Bar {
  public:
    void showMe(void) {
      cout << "This method is inside the Bar class" << endl;
    }

    void test(void) {
      this->showMe();
      // showMe(); // same as this->showMe();
      ::showMe();
    }
};

int main(void) {
  // Foo foo1, foo2;

  // cout << foo2.data << endl;
  // cout << foo1.getData() << endl;
  // cout << Foo::data << endl;
  // cout << Foo::getData() << endl;

  Bar bar;
  bar.test();

  return 0;
}