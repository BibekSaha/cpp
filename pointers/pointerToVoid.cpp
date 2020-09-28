#include <iostream>

using namespace std;

int main(void) {
  int intVar = 100;
  float floatVar = 100.01;

  int * ptrint; float * ptrfloat; void * ptrvoid;

  ptrint = &intVar;
  // ptrint = &floatVar; // NOT OKAY
  // ptrfloat = &intVar; // NOT OKAY
  ptrfloat = &floatVar;
  
  ptrvoid = &intVar;
  ptrvoid = &floatVar;

  return 0;
}