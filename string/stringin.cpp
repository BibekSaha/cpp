#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
  const int MAX = 10;

  char str[MAX];

  cout << "Enter a string: ";
  // Avoiding buffer overflow
  cin >> setw(MAX) >> str;

  cout << endl << "You have entered: " << str << endl;

  char constString[] = "My name is John Doe";
  cout << constString << endl;

  return 0;
}

// Thing to do when the internet comes
// - Google for buffer overflow attack in Software programming
// - 