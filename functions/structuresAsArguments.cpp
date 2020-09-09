#include <iostream>

using namespace std;

struct Rectangle {
  int length, breadth;
};

struct Circle {
  int radius;
};

// Overloading example
float area(Rectangle);
float area(Circle);

int main(void) {
  Rectangle rect;
  rect.length = 10;
  rect.breadth = 15;

  cout << "Area of the reactangle is " << area(rect) << endl;

  Circle cir;
  cir.radius = 10;

  cout << "Area of the circle is " << area(cir) << endl;

  return 0;
}

float area(Rectangle rect) {
  return rect.length * rect.breadth;
}

float area(Circle cir) {
  return (22.0/7) * cir.radius * cir.radius;
}