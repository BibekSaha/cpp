#include <iostream>

using namespace std;

void displayString(const char *);
char * copystr(char *, const char *);

int main(void) {
  char string1[] = "The quick brown fox jumps over the lazy dog";
  char * string2 = "The quick brown fox jumps over the lazy dog";

  cout << string1 << endl;
  cout << string2 << endl;

  // string1++;
  string2++;

  cout << string2 << endl;

  char * eg = "netflix and chill";
  displayString(eg);

  char copiedEg[100];
  copystr(copiedEg, eg);

  cout << copiedEg << endl;

  return 0;
}

void displayString(const char * str) {
  while (*str)
    cout << *str++;
  cout << endl;
}

char * copystr(char * dest, const char * src) {
  while (*src)
    *dest++ = *src++;
  *dest = '\0';
  return dest;
}