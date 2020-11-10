#include <iostream>

using namespace std;

class Gamma {
  private:
    static int total;
    int id;

  public:
    Gamma() {
      Gamma::total++;
      this->id = total;
    }

    ~Gamma() {
      Gamma::total--;
      cout << "Destroying ID number " << this->id << endl;
    }

    static void showTotal(void) {
      cout << "Total is " << Gamma::total << endl;
    }

    void showId() {
      cout << "ID number is " << this->id << endl;
    }
};

int Gamma::total = 0;

int main(void) {
  Gamma g1;
  Gamma::showTotal();

  Gamma g2, g3;
  Gamma::showTotal();

  g1.showId();
  g2.showId();
  g3.showId();

  cout << "***** END OF PROGAM *****" << endl;

  return 0;
}