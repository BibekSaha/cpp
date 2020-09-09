#include <iostream>
#include <string>

using namespace std;

int main(void) {
  char charray[80];
  string word;

  cout << "Enter a word: ";
  getline(cin, word);

  int wlen = word.length();

  cout << "One character at a time:-" << endl;
  for (int i = 0; i < wlen; i++) {
    cout << word[i]
      << word.at(i);
  }
  cout << endl;

  word.copy(charray, wlen, 0);
  charray[wlen] = 0;
  cout << endl << "Array contains: " << charray << endl;

  return 0;
}