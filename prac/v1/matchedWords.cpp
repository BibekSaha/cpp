#include <iostream>
#include <string>

using namespace std;

unsigned matchedWords(string, string);

int main(void) {
  string str = "ONE TWO THREE FOUR FIVE TWO";
  unsigned countTwo = matchedWords(str, "TWO"),
    countSeven = matchedWords(str, "SEVEN");
  
  cout << "TWO appears " << countTwo << " times in " << str << endl;
  cout << "SEVEN appears " << countSeven << " times in " << str << endl;

  return 0;
}

unsigned matchedWords(string sentence, string word) {
  int startingIndex = -1; unsigned count = 0;
  while (
    (startingIndex = sentence.find(word, startingIndex+1)) != -1
  ) count++;
  return count;
}