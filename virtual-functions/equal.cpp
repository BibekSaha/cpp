#include <iostream>

using namespace std;

class Alpha {
  private:
    int data;

  public:
    // NOTE: When you overload the `=` then you should proably over the copy constructor too

    Alpha(int data = 0) {
      this->data = data;
    }

    // overloading the copy constructor
    Alpha(Alpha & a) {
      cout << "Overloading the copy constructor" << endl;
      this->data = a.data;
    }

    void display(void) {
      cout << this->data << endl;
    }

  // overloading the assignment operator
  Alpha & operator = (Alpha & a) {
    cout << "Assignment Operator" << endl;
    this->data = a.data;
    return *this;
    // static Alpha objectToReturn(a.data);
    // return objectToReturn;
  }
};

void alphaTest(Alpha a) {
  cout << "This is the function that is defined in the global scope" << endl;
}

void alphaRef(Alpha & a) {
  cout << "Alpha Ref" << endl;
}

int main(void) {
  Alpha a(11), b(12), c, d = b;
  c = a;
  
  a.display(); b.display(); c.display();
  d.display();

  // copy constructor will be called
  alphaTest(a);
  // copy constructor will NOT be called
  alphaRef(b);

  return 0;
}