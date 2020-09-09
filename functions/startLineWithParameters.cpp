#include <iostream>

using namespace std;

void startLineWithParameters(char);

int main(void) {
  // Passing direct arguments
  startLineWithParameters('*');
  cout << "Some Random Statement" << endl;
  startLineWithParameters('*');

  cout << endl << endl;

  // Passing arguments stored inside of a variable
  char anotherChar = '=';
  startLineWithParameters(anotherChar);
  cout << "Another Random Statement" << endl; 
  startLineWithParameters(anotherChar);

  return 0;
}

void startLineWithParameters(char ch) {
  for (int i = 0; i < 45; i++) {
    cout << ch;
  }
  cout << endl;
}