#include <iostream>

using namespace std;

int main(void) {
  float principle, rate, time;

  cout << "Enter the principle, rate and time (in years): ";
  cin >> principle >> rate >> time;

  float simpleInterest = (principle * rate * time) / 100;

  cout << "Simple Interest is " << simpleInterest << endl;

  return 0;
}