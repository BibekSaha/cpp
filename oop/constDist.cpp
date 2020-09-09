#include <iostream>

using namespace std;

class Distance {
  private:
    int feet; float inches;

  public:
    Distance(int feet, float inches) {
      this->feet = feet;
      this->inches = inches;
    }

    void getDistance() {
      cout << "Enter the feet: ";
      cin >> this->feet;
      cout << "Enter the inches: ";
      cin >> this->inches;
    }

    void showDistance() const {
      cout << this->feet << "' - " << this->inches << "\"" << endl;
    }
};

int main(void) {
  const Distance dist(5, 9.75);
  // dist.getDistance(); // this will not work since the method is not const
  dist.showDistance();

  return 0;
}