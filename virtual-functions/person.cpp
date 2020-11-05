#include <iostream>

using namespace std;

class Person {
  protected:
    string fullName;

  public:
    void setFullName(void) {
      cout << "Enter your full name: ";
      cin >> this->fullName;
    }

    void printFullName(void) {
      cout << this->fullName << endl;
    }

    virtual void getData(void) = 0;
    virtual bool isOutstanding() = 0;
};

class Student : public Person {
  private:
    float gpa;

  public:
    void getData(void) override {
      Person::setFullName();
      cout << "Enter the student's gpa: ";
      cin >> this->gpa;
    }

    bool isOutstanding(void) override {
      return this->gpa > 3.5;
    }
};

class Professor : public Person {
  private:
    int numPubs;

  public:
    void getData(void) override {
      Person::setFullName();
      cout << "Enter the number of publications: " << endl;
      cin >> this->numPubs;
    }

    bool isOutstanding(void) override {
      return this->numPubs > 100;
    }
};

int main(void) {
  Person * persPtr[100];
  int index = 0; char choice;

  do {
    cout << "Enter student or professor: ";
    cin >> choice;
    if (choice == 's') persPtr[index] = new Student;
    else persPtr[index] = new Professor;
    persPtr[index++]->getData();
    cout << "Do you want to continue? ";
    cin >> choice;
  } while (choice == 'y');

  for (int i = 0; i <= index; i++) {
    persPtr[i]->printFullName();
    if (persPtr[i]->isOutstanding())
      cout << "He/She is outstanding!!!" << endl;
  }

  return 0;
}