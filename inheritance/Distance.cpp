#include <iostream>

using namespace std;

enum posneg { pos, neg };

class Distance {
  protected:
    int feet;
    float inches;

  public:
    Distance(int feet = 0, float inches = 0) {
      this->feet = feet;
      this->inches = inches;
    }

    void showDist(void) {
      cout << this->feet << " feet " << this->inches << " inches" << endl;
    }
};

class DistanceSign : public Distance {
  private:
    posneg sign;

  public:
    DistanceSign(
      int feet = 0, 
      float inches = 0, 
      posneg sign = pos
    ) : Distance(feet, inches) {
      this->sign = sign;
    }

    void showDist(void) {
      cout << (this->sign == pos ? "+ " : "- ");
      Distance::showDist(); 
    }
};

int main(void) {
  DistanceSign dist(10, 15.25, neg);

  dist.showDist();

  return 0;
}