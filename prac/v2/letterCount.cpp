#include <iostream>

using namespace std;

int countCharacters(string, char);

int main(void) {
  string word; char letter;

  cout << "Enter the sentence: ";
  getline(cin, word);

  cout << "Enter the letter to be counted: ";
  cin >> letter;

  cout << endl;
  cout << letter << " appears " << countCharacters(word, letter) << " times in the sentence." << endl;

  return 0;
}

int countCharacters(string word, char character) {
  int count = 0;
  for (int i = 0; i < word.length(); i++) if (tolower(word[i]) == character) count++;
  return count;
}
