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

    // prefix notation
    Counter operator ++ () { 
      ++this->counter;
      return *this;
    }

    // postfix notation
    Counter operator ++ (int) {
      this->counter++;
      return *this;
    }
};

int main(void) {
  // Counter count, county(10);

  // cout << "Initial value of counter is " << count.getCount() << endl;

  // ++count; ++count; ++count; count++;

  // cout << "Final value of counter is " << count.getCount() << endl;

  // ++county; ++county;
  // cout << county.getCount() << endl;

  // Counter countx = ++county;

  // cout << countx.getCount() << endl;

  // Counter post = county++;
  // cout << post.getCount() << endl;

  {
    Counter c1, c2;

    cout << "c1 = " << c1.getCount() << endl; // 0
    cout << "c2 = " << c2.getCount() << endl; // 0

    ++c1; // c1 = 1;
    c2 = ++c1; // c1 = 2, c2 = 2

    cout << "c1 = " << c1.getCount() << endl; // 2
    cout << "c2 = " << c2.getCount() << endl; // 2

    c2 = c1++; // c1 = 2+, c2 = 2+

    cout << "c1 = " << c1.getCount() << endl; // 3
    cout << "c2 = " << c2.getCount() << endl; // 3
  }

  return 0;
}