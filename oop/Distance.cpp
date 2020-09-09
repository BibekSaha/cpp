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
      cout << "Feet: " << feet << endl;
      cout << "Inches: " << inches << endl;
    }

    void addDistance(Distance, Distance);
};

void Distance::addDistance(Distance d1, Distance d2) {
  inches = d1.inches + d2.inches;
  feet = 0;
  if (inches >= 12.0) { feet++; inches -= 12.0; }
  feet += d1.feet + d2.feet;
}

int main(void) {
  Distance d1, d2(1, 1.5F), d3;
  Distance d4(d2); // default copy constructor
  Distance d5 = d2; // same default copy constructor

  cout << "Initially d3:-" << endl;
  d3.showDistance();
  cout << endl;

  d3.addDistance(d1, d2);

  cout << "After adding the distances d3:-" << endl;
  d3.showDistance();

  cout << "\n######### Default Copy Constructor #########" << endl;
  d4.showDistance();
  cout << endl;
  d5.showDistance();
  return 0;
}