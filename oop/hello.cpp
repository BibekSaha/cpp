#include <iostream>

using namespace std;

class Hello {
  private:
    int data;

  public:
    void setData(int data) {
      this->data = data;
    }

    int getData() { return data; }
};

int main(void) {
  Hello h1, h2;

  h1.setData(123);
  h2.setData(100);

  cout 
  << "h1.data = " << h1.getData() << endl
  << "h2.data = " << h2.getData() << endl;

  return 0;
}