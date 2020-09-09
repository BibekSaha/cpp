#include <iostream>

using namespace std;

class Distance {
  private:
    int feet;
    float inches;

  public:
    Distance():
      feet(0), inches(0.0F) {}
    
    Distance(int feet, float inches):
      feet(feet), inches(inches) {}

    void showDistance() {
      cout << "Feet: " << this->feet << endl;
      cout << "Inches: " << this->inches << endl;
    }

    Distance addDistance(Distance) const;
};

Distance Distance::addDistance(Distance d) const {
  Distance dist;
  dist.inches = this->inches + d.inches;
  dist.feet = 0;
  if (dist.inches >= 12.0) { dist.feet++; dist.inches -= 12.0; }
  dist.feet += this->feet + d.feet;
  return dist;
}

int main(void) {
  Distance d1(1, 1.25), d2(5, 3.675);
  Distance d3 = d1.addDistance(d2);

  d3.showDistance();
  
  return 0;
}