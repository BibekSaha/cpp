#include <iostream>

using namespace std;

class Data {
  private:
    int data;

  public:
    void setData(int data) {
      this->data = data;
    }

    int getData() {
      return this->data;
    }
};

int main(void) {
  Data data, * usingData;
  usingData = &data;

  usingData->setData(15);

  cout << "Value of data is " << usingData->getData() << endl;

  return 0;
}