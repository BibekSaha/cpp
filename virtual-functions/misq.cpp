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

    void showDistance(void) {
      cout << this->feet << " feet " <<
        this->inches << " inches" << endl;
    }

    friend float square(Distance);
};

float square(Distance d) {
  float floatFeet = d.feet + (d.inches / 12);
  return floatFeet * floatFeet;
}

int main(void) {
  Distance dist(3, 6.0);
  float sqt;

  sqt = square(dist);
  
  dist.showDistance();
  cout << sqt << endl;

  return 0;
}