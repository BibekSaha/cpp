#include <iostream>

using namespace std;

int main(void) {
  const int MAX = 100;
  char fullName[MAX], multilineString[MAX];

  cout << "Enter your name: ";
  cin.get(fullName, MAX);

  cout << "Enter the Multiline string: ";
  cin.get(multilineString, MAX, '~');

  cout << endl << "Your full name is " << fullName << endl;

  cout << endl << "You have entered: " << multilineString << endl;

  return 0;
}