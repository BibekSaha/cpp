#include <iostream>
#include <string>

using namespace std;

class Person {
  protected:
    string fullName;

  public:
    void setFullName(void) {
      cout << "Enter the full name: ";
      cin >> this->fullName;
    }

    string getFullName(void) { return this->fullName; }
};

int main(void) {
  Person * persons[100];
  string fullName;
  int index = 0; char choice;

  do {
    persons[index] = new Person; 
    persons[index]->setFullName(); index++;
    cout << "\nDo you want to continue? ";
    cin >> choice;
  } while (choice == 'y');

  cout << endl;
  for (int i = 0; i <= index; i++)
    cout << (i + 1) << ". " << persons[i]->getFullName() << endl;

  return 0;
}