#include <iostream>

using namespace std;

struct Rectangle {
  int length, breadth;
  int area() { return length * breadth; }
};

int main(void) {
  Rectangle rects[2];

  for (int i = 0; i < 2; i++) {
    cout << "Enter the length: ";
    cin >> rects[i].length;
    cout << "Enter the breadth: ";
    cin >> rects[i].breadth;
    cout << endl;
  }

  for (int i = 0; i < 2; i++) {
    cout << "Area of the rectangle " << i + 1 << " is "
      << rects[i].area() << endl;
  }

  return 0;
}