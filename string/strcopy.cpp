#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
  const int size = 100;
  char copyMe[] = "12345";
  char copiedv1[size], copiedv2[size];

  for (int i = 0; i < strlen(copyMe); i++)
    copiedv1[i] = copyMe[i];

  // copying using built in C functions
  strcpy(copiedv2, copyMe);

  cout << "Copied string: " << copiedv1 << endl;
  cout << "Length of copied string: " << strlen(copiedv1) << endl << endl;
  cout << "Copied string v2: " << copiedv2 << endl;
  cout << "Length of copied string v2: " << strlen(copiedv2) << endl;

  return 0;
}
