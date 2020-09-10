#include <iostream>

using namespace std;

class Counter {
  private:
    unsigned counter;

  public:
    Counter(int counter = 0) {
      this->counter = counter;
    }

    unsigned getCount() { return this->counter; }

    Counter operator ++ () { 
      ++this->counter;
      return *this;
    }

    Counter operator ++ (int) {
      this->counter++;
      return *this;
    }
};

int main(void) {
  Counter count, county(10);

  cout << "Initial value of counter is " << count.getCount() << endl;

  ++count; ++count; ++count; count++;

  cout << "Final value of counter is " << count.getCount() << endl;

  ++county; ++county;
  cout << county.getCount() << endl;

  Counter countx = ++county;

  cout << countx.getCount() << endl;

  return 0;
}