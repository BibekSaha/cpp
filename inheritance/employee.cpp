#include <iostream>

using namespace std;

class Employee {
  private:
    string name;
    unsigned long number;

  public:
    Employee(string name, unsigned long number) {
      this->name = name;
      this->number = number;
    }

    void printEmployee(void) const {
      cout << "Name: " << this->name << endl;
      cout << "ID Number: " << this->number << endl;
    }
};

class Manager : public Employee {
  private:
    string title;
    double dues;

  public:
    Manager(
      string name, 
      unsigned long number, 
      string title,
      double dues
    ) : Employee(name, number) {
      this->title = title;
      this->dues = dues;
    }

    void printEmployee(void) const {
      Employee::printEmployee();
      cout << "Title: " << this->title << endl;
      cout << "Dues: " << this->dues << endl;
    }
};

class Scientist : public Employee {
  private:
    unsigned pubs;
  
  public:
    Scientist(
      string name,
      unsigned long number,
      unsigned pubs 
    ) : Employee(name, number) {
      this->pubs = pubs;
    }

    void printEmployee(void) const {
      Employee::printEmployee();
      cout << "Publications: " << this->pubs << endl;
    }
};

class Labourer : public Employee {
  public:
    Labourer(
      string name,
      unsigned long number
    ) : Employee(name, number) {}
};

int main(void) {
  Manager m1("John Doe", 123456, "Senior Consultant", 100),
    m2("Jane Doe", 678910, "Senior Sales Representative", 123.123);

  Scientist s1("Willy Wonka", 4709234, 10);

  Labourer l("Matthew Hallway", 341234);

  m1.printEmployee(); cout << endl; 
  m2.printEmployee(); cout << endl;
  s1.printEmployee(); cout << endl;
  l.printEmployee();

  return 0;
}