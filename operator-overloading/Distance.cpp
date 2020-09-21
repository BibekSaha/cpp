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

    Distance operator + (Distance) const;
    void operator += (Distance);
    bool operator < (Distance) const;
};

Distance Distance::operator + (Distance d) const {
  float inches = this->inches + d.inches;
  int feet = this->feet + d.feet;
  if (inches >= 12.0) {
    inches -= 12.0;
    feet++;
  }
  return Distance(feet, inches);
}

void Distance::operator += (Distance d) {
  this->feet += d.feet;
  this->inches += d.inches;
  if (this->inches >= 12.0) {
    this->inches -= 12.0;
    this->feet++;
  }
}

bool Distance::operator < (Distance d) const {
  const float distv1 = this->feet + (this->inches / 12);
  const float distv2 = d.feet + (d.inches / 12);
  return distv1 < distv2 ? true : false;
}

int main(void) {
  Distance d1(10, 11.0), d2(20, 5.0);

  Distance d3 = d1 + d2;

  d1.showDistance();
  d3.showDistance();

  cout << "d1 is less than d2 " << (d1 < d2) << endl;

  d1 += d2;

  d1.showDistance();

  return 0;
}