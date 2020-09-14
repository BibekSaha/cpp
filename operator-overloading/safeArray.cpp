#include <iostream>

using namespace std;

class SafeArray {
  private:
    enum { MAX = 100 };
    int array[MAX];

  public:
    int length = 0;

    void put(int pos, int value) {
      if (pos < 0 || pos >= MAX) exit(1);
      this->array[pos] = value;
      length++;
    }

    int get(int pos) const {
      if (pos < 0 || pos >= MAX) exit(1);
      return this->array[pos];
    }

    int & access(int pos) {
      if (pos < 0 || pos >= MAX) exit (1);
      return this->array[pos];
    }

    int & operator [] (int pos);
};

int & SafeArray::operator [] (int pos) {
  if (pos < 0 || pos >= MAX) exit(1);
  return this->array[pos];
}

int main(void) {
  SafeArray sa;

  for (int i = 0; i < 10; i++) sa.put(i, i * 11);

  for (int i = 0; i < sa.length; i++) cout << sa.get(i) << "\t";
  cout << endl;

  SafeArray sav2;

  for (int i = 0; i < 10; i++) sav2.access(i) = i * 11;

  for (int i = 0; i < 10; i++) cout << sav2.access(i) << "\t";
  cout << endl;

  SafeArray sav3;

  for (int i = 0; i < 10; i++) sav3[i] = i * 11;
  for (int i = 0; i < 10; i++) cout << sav3[i] << "\t";
  cout << endl;

  return 0;
}