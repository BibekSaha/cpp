#include <iostream>

using namespace std;

float convertToCelcius(float);

int main(void) {
  int fahrenheit = 32;

  cout << fahrenheit << " fahrenheit is " 
    << convertToCelcius(fahrenheit) << " celcius" << endl;

  return 0;
}

float convertToCelcius(float fahrenheit) { return (5 / 9) * (fahrenheit - 32); }