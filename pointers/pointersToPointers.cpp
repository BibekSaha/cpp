#include <iostream>

using namespace std;

class Person {
  private:
    string firstName, lastName;

  public:
    Person(string firstName, string lastName) {
      this->firstName = firstName;
      this->lastName = lastName;
    }

    string getFirstName(void) { return this->firstName; }
    
    string getLastName(void) { return this->lastName; }
};

void setFullName(Person *);
void printFullNames(Person **);

int main(void) {
  Person * persons[100];
  int index = 0;
  char ch = 'y';

  while (ch == 'y') {
    setFullName(persons[index]);
    index++;
    cout << "Do you want to continue? ";
    cin >> ch;
  }

  printFullNames(persons);

  return 0;
}

void setFullName(Person * person) {
  string firstName, lastName;
  cout << "Enter the first name: ";
  cin >> firstName;
  cout << "\nEnter the last name: ";
  cin >> lastName;
  person = new Person(firstName, lastName); 
}