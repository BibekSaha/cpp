#include <iostream>

using namespace std;

int x;
int & setx();
int & weird();

int main(void) {
  setx() = 100;
  cout << "x = " << x << endl;

  int & zz = weird();
  zz = 10;
  cout << "z = " << zz << endl;
  zz = 20;
  cout << "z = " << zz << endl;
 
  return 0;
}

int & setx() {
  return x;
}

int & weird() {
  static int z;
  cout << "Inner: " << z << endl;
  return z;
}