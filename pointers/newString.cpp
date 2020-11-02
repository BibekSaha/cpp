#include <iostream>
#include <cstring>

using namespace std;

class String {
  private:
    char * str;

  public:
    String(const char * str = "") {
      this->str = new char[strlen(str) + 1];
      strcpy(this->str, str);
    }

    String(const String & s) {
    }

    ~String() {
      cout << endl << "Deleting the space allocated" << endl;
      delete[] this->str;
    }

    void display(void) {
      cout << this->str << endl;
    }
};

int main(void) {
  String * s1 = new String("Some very random string");
  String & s = *(new String("Batman"));
  String s2 = *s1;

  s1->display();

  delete s1;

  s2.display(); // will not work because

  cout << "This is the last statement" << endl;

  return 0;
}