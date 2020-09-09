#include <iostream>

using namespace std;

void startLine();

int main(void) {
  startLine();
  cout << "This will be very visible" << endl;
  startLine();

  return 0;
}

void startLine() {
  for (int i = 0; i < 45; i++) {
    cout << "*";
  }
  cout << endl;
}