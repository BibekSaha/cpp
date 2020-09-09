#include <stdio.h>
#include <string.h>

struct Rectangle {
  int length, breadth;
  // (name) points to a string
  char * name;
  char namev2[];
};

int main(void) {
  char name[] = "Rectangle One", anotherName[] = "Another dumb Rectangle";

  struct Rectangle rect;
  // rect.name = name;
  rect.name = "Super cool name for the rectangle";
  strcpy(rect.namev2, anotherName);

  printf("%s\n", rect.name);
  printf("%s\n", rect.namev2);

  return 0;
}