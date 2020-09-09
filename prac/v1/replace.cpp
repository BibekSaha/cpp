#include <iostream>
#include <string>

using namespace std;

int main(void) {
  string s1 = "Suman Saha", s2 = "Ashis Kumar Das";

  // Sumar Kumar Das
  string finalStr = s1.replace(6, 4, s2.substr(6));

  cout << finalStr << endl;

  return 0;
}