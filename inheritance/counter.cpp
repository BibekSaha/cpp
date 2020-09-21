#include <iostream>

using namespace std;

class Counter {
  protected:
    unsigned count;
  
  public:
    Counter(int count = 0) {
      this->count = count;
    }

    unsigned getCount() const { return this->count; }

    Counter operator ++ () {
      ++this->count;
      return *this;
    }
};

class CounterX : public Counter {
  public:
    CounterX() { Counter(); }

    CounterX(int count) { Counter(count); }

    CounterX operator -- () {
      --this->count;
      return *this;
    }
};

int main(void) {
  CounterX count = 10;
  cout << "Counter is " << count.getCount() << endl;

  ++count; ++count; ++count;
  cout << "Counter is " << count.getCount() << endl;

  --count; --count;
  cout << "Counter is " << count.getCount() << endl;

  return 0;
}