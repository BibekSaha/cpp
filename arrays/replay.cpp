#include <iostream>

using namespace std;

int main(void) {
  int age[4];

  for (int i = 0; i < 4; i++) {
    cout << "Enter an age: ";
    cin >> age[i];
  }

  cout << endl;
  for (int i = 0; i < 4; i++)
    cout << "You have entered: " << age[i] << endl;

  return 0;
}