#include <iostream>

using namespace std;

struct Rectangle {
  int length, breadth;
};

struct Square {
  int side;
};

int area(Rectangle);
int area(Square);

int main(void) {
  Rectangle rectangle = { 15, 10 };
  Square square = { 25 };

  cout << "Area of the rectangle is " << area(rectangle) << endl;
  cout << "Area of the square is " << area(square) << endl;

  return 0;
}

int area(Rectangle rect) { return rect.length * rect.breadth; }

int area(Square sq) { return sq.side * sq.side; }