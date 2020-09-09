#include <iostream>

using namespace std;

class Counter {
  private:
    int count;

  public:
    // This is the constructors in C++
    Counter(): 
      count(0) {}

    // This is the destructor in C++
    ~Counter() {}
    
    void incCount() { count++; }

    int getCount() { return count; }
};

int main(void) {
  Counter counter;

  cout << "Initial value of count: " << counter.getCount() << endl;

  counter.incCount();
  counter.incCount();
  counter.incCount();

  cout << "After incrementing the value of count: " << counter.getCount() << endl;

  return 0;
}