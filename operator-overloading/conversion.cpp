#include <iostream>

using namespace std;

class Distance {
  private:
    int feet;
    float inches;

  public:
    Distance(int feet = 0, float inches = 0.0) {
      this->feet = feet;
      this->inches = inches;
    }

    void showDistance() const {
      cout << this->feet << " feet " << this->inches << " inches" << endl;
    }

    operator float() const {
      return this->feet + (this->inches / 12);
    }
};

int main(void) {
  Distance d1(10, 11.0), d2(20, 5.0);

  float d1IntoFloat = static_cast<float>(d1);

  cout << d1IntoFloat << endl;

  d1.showDistance();

  return 0;
}