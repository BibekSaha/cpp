#include <iostream>

using namespace std;

int main(void) {
  const int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
  int month, day, totalDays = 0;

  cout << "Enter the month (1 - 12): ";
  cin >> month;

  cout << "Enter the day (1 - 31): ";
  cin >> day;

  for (int i = 0; i < month - 1; i++) totalDays += months[i];
  totalDays += day;

  cout << "\nTotal days from the start of the year: " << totalDays << endl;

  return 0;
}