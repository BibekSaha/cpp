#include <iostream>

using namespace std;

void swap(int *, int *);
void printArray(int *, size_t);
void printVars(int , int);

int main(void) {
  int a = 10, b = 100;

  printVars(a, b);

  swap(&a, &b);

  cout << endl;
  printVars(a, b);

  int array[] = {1, 2, 3, 4, 5};
  printArray(array, sizeof(array) / sizeof(array[0]));

  return 0;
}

void swap(int * num1, int * num2) {
  int temp = *num1;
  *num1 = *num2;
  *num2 = temp;
}

void printArray(int * array, size_t limit) {
  for (int i = 0; i < limit; i++) {
    cout << array[i] << endl;
  }
}

void printVars(int num1, int num2) {
  cout << "Number One:- " << num1 << endl;
  cout << "Number Two:- " << num2 << endl;
}
