/**
  @author Bibek Saha
  @date 24the August 2020
  @file structures.cpp
  @brief A simple program showing how to use structures in C++
*/

#include <iostream>

using namespace std;

struct User {
  private:
    string firstName, lastName;
    int age;

  public:
    // The functions that begin with the word set is the setter methods
    // The functions that begin with the word get is the getter methods
    string getFirstName() {
      return firstName;
    }

    void setFirstName(string _firstName) {
      firstName = _firstName;
    }

    string getLastName() {
      return lastName;
    }

    void setLastName(string _lastName) {
      lastName = _lastName;
    }

    int getAge() {
      return age;
    }

    void setAge(int _age) {
      age = _age;
    }
};

int main(void) {
  User user;

  user.setFirstName("Bibek");
  user.setLastName("Saha"); 
  user.setAge(19);

  cout << "First name of the user is " << user.getFirstName() << endl;
  cout << "Last name of the user is " << user.getLastName() << endl;
  cout << "Age of the user is " << user.getAge() << endl;

  return 0;
}
