#include <iostream>

using namespace std;

int main(void) {
  const int DAYS = 7, MAX = 10;
  char week[DAYS][MAX] = {
    "Monday",
    "Tuesday", 
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday"
  };

  for (int i = 0; i < DAYS; i++)
    cout << week[i] << endl;
  
  return 0;
}
