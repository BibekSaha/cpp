#include <iostream>

using namespace std;

int main(void) {
  int radius;
  const int PI = 3.14;
  double area;

  cout << "Enter the radius of the circle: ";
  cin >> radius;

  area = PI * radius * radius;

  cout << "Area of the circle is " << area << endl;
  return 0;
}