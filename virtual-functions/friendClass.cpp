#include <iostream>

using namespace std;

class Alpha {
  private:
    int data;
  
  public:
    Alpha() {
      this->data = 100;
    }

    // Getter method to get the private data
    int getData(void) { return this->data; }

    friend class Beta;
};

class Beta {
  public:
    void function(Alpha a) {
      cout << a.data << endl;
    }
};

class Gamma {
  public:
    void function(Alpha a) {
      cout << a.getData() << endl;
    }
};

int main(void) {
  Alpha a;
  Beta b; Gamma g;

  b.function(a);
  g.function(a);

  return 0;
}