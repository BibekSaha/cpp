#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
  const char * someString = "The quick brown fox jumps over the lazy dog";
  int len = strlen(someString);

  char * ptr;
  ptr = new char[len + 1];

  strcpy(ptr, someString);

  cout << "ptr = " << ptr << endl;

  delete[] ptr; // indicates all the members of the array is deleted

  return 0;
} 