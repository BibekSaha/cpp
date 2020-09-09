#include <iostream>

using namespace std;

int main(void) {
  system("clear");
  // Initialization
  string s1("Ringardium");
  string s2 = "Leviosa";
  string s3;
  s3 = s2;

  cout << s3 << endl;

  // Concatination
  s3 = s1 + " " + s2;

  cout << s3 << endl;

  s1.swap(s2);

  cout << s1 + " " + s2 << endl;

  // I/O with string
  string str;
  cout << "Enter the string: ";
  getline(cin, str, '~');
  cout << endl << "You have entered: " << str << endl;

  return 0;
}