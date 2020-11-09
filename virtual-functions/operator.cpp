#include <iostream>

using namespace std;

class Complex {
  int real, imag;

  public:
    Complex(int real = 0, int imag = 0) {
      this->real = real;
      this->imag = imag;
    }

    void print(void) { 
      cout << "Real: " << this->real 
        << ", Imag: " << this->imag << endl;
    }

    Complex operator + (Complex) const;
    friend Complex operator + (int, Complex);
};

Complex Complex::operator + (Complex c) const {
  Complex temp;
  temp.real = this->real + c.real;
  temp.imag = this->imag + c.imag;
  return temp;
}

Complex operator + (int number, Complex c) {
  Complex temp = c;
  temp.real = c.real + number;
  return temp;
}

int main(void) {
  Complex c1(1, 2), c2(2, 3);

  Complex c3 = c1 + c2;
  c3.print();

  c3 = 5 + c3;

  c3.print();

  return 0;
}