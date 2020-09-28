#include <iostream>

using namespace std;

int main(void) {
  int array[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
    cout << *(array + i) * 10 << endl;
  }

  return 0;
}