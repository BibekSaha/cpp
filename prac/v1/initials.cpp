#include <iostream>
#include <string>

using namespace std;

string getInitials(string);

int main(void) {
  string str;

  cout << "Enter the string: ";
  getline(cin, str);

  string initials = getInitials(str);

  cout << initials << endl;

  return 0;
}

string getInitials(string fullName) {
  fullName = " " + fullName;
  int startingIndex = -1;
  string initials = "";
  while (true) {
    startingIndex = fullName.find(" ", startingIndex+1);
    if (startingIndex == -1) break;
    initials += toupper(fullName[startingIndex+1]);
    initials += ".";
  }
  initials.replace(initials.find_last_of("."), 1, "");
  return initials;
}