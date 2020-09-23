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

    void helloWorld(void) { cout << "This is from Counter class" << endl; }

    Counter operator ++ () {
      ++this->count;
      return *this;
    }
};

class CounterX : public Counter {
  public:
    CounterX(int count = 0) : Counter(count) {}

    void helloWorld(void) {
      Counter::helloWorld();
      cout << "This is from CounterX class" << endl;
    }

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

  count.Counter::helloWorld();
  cout << endl;
  count.helloWorld();

  return 0;
}