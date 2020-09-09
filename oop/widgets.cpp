#include <iostream>

using namespace std;

class Part {
  private:
    int modelNumber, partNumber;
    float cost;
  
  public:
    void setPart(int modelNumber, int partNumber, float cost) {
      this->modelNumber = modelNumber;
      this->partNumber = partNumber;
      this->cost = cost;
    }

    // void setPart(int mn, int pn, float _cost) {
    //   modelNumber = mn;
    //   partNumber = pn;
    //   cost = _cost;
    // }

    void showPart() {
      cout
      << "Model Number: " << modelNumber << endl
      << "Part Number: " << partNumber << endl
      << "Cost: " << cost << endl;
    }
};

int main(void) {
  Part part;

  part.setPart(6244, 373, 217.55F);

  part.showPart();

  return 0;
}