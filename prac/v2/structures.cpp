/**
 * @author Bibek Saha
 * @file structures.cpp
 * @date 24th August 2020
 * @brief C++ program showing how to use the structures
 */

#include <iostream>

using namespace std;

struct User {
  private:
    string firstName, lastName;
    int age;
  
  public:
    void setFirstName(string _firstName) {
      firstName = _firstName;
    }

    string getFirstName() {
      return firstName;
    }

    void setLastName(string _lastName) {
      lastName = _lastName;
    }

    string getLastName() {
      return lastName;
    }

    void setAge(int _age) {
      age = _age;
    }

    int getAge() {
      return age;
    }
};

int main(void) {
  User user;

  user.setFirstName("John");
  user.setLastName("Doe");
  user.setAge(101);

  cout << "First name of the user is " << user.getFirstName() << endl;
  cout << "Last name of the user is " << user.getLastName() << endl;
  cout << "Age of the user is " << user.getAge() << endl;

  return 0;
}