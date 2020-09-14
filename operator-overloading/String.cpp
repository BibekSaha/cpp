#include <iostream>
#include <cstring>

using namespace std;

class String {
  private:
    enum { size = 100 };
    char str[size];

  public:
    String() {
      strcpy(this->str, "");
    }

    String(char str[]) {
      strcpy(this->str, str);
    }

    void display() const {
      cout << this->str << endl;
    }

    String operator + (String) const;
    bool operator == (String) const;
    operator char* () {
      return this->str;
    }
};

String String::operator + (String s) const {
  String temp;
  if (strlen(this->str) + strlen(s.str) > this->size) {
    cout << "string buffer overflow" << endl;
    exit(1);
  }
  strcpy(temp.str, this->str);
  strcat(temp.str, s.str);
  return temp;
}

bool String::operator == (String s) const {
  return strcmp(this->str, s.str) == 0;
}

int main(void) {
  char ss1[] = "Hello", ss2[] = "World", ss3[] = "HelloWorld";
  String s1 = ss1, s2 = ss2;
  String s3 = s1 + s2;
  String s4 = ss3;

  s3.display();
  s4.display();

  cout << (s4 == s3) << endl;

  cout << static_cast<char *>(s1) << endl;

  return 0;
}
