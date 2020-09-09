#include <iostream>

using namespace std;

int main(void) {
  string myName = "Bibek Saha";
  string firstName = "Bibek", lastName = "Saha";

  cout << myName << endl;
  cout << firstName + ' ' + lastName << endl;

  // string fullName = firstName.append(lastName);
  firstName.append(lastName); // The original string gets changed
  cout << firstName << endl;

  return 0;
}