#include <iostream>

using namespace std;

struct User {
  string firstName, lastName;
  int age;
};

User createUser(string, string, int);

int main(void) {
  User me = createUser("Bibek", "Saha", 20);

  cout << "First Name: " << me.firstName << endl;
  cout << "Last Name: " << me.lastName << endl;
  cout << "Age: " << me.age << endl;

  return 0;
}

User createUser(string firstName, string lastName, int age) {
  User user;
  user.firstName = firstName;
  user.lastName = lastName;
  user.age = age;
  return user;
}