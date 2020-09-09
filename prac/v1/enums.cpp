#include <iostream>

using namespace std;

enum daysOfWeek { mon, tue, wed, thur, fri, sat, sun };

int main(void) {
  daysOfWeek weekOne;
  weekOne = wed;

  cout << weekOne << endl; 

  return 0;
}