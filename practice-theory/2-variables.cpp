#include <iostream>
#include <string>

using namespace std;

int main(void) {
  int myNumber = 15, yourNumber = 30, someVariable;
  const int  SOME_CONST_VALUE = 3443;
  double someDoubleValue = 34.454545;
  bool isCodingFun = true;
  char grade = 'A';
  string name = "Bibek Saha";

  cout << myNumber + yourNumber << endl;
  cout << SOME_CONST_VALUE << endl;

  cout << "Enter the desired number: ";
  cin >> someVariable;

  cout << "You have entered " << someVariable << endl;
  cout << "The double value is " << someDoubleValue << endl;
  cout << isCodingFun << endl;
  cout << grade << endl;
  cout << "My name is " << name << endl;

  return 0;
}