#include <iostream>
#include <string>

using namespace std;

int main(void) {
  system("clear");
  string str = "the quick brown fox jumps over the lazy dog";

  /***************************
   * Finding                 *
  ****************************/
  // int findBrown = str.find("brown");
  // cout << "Found brown at " << findBrown << endl;

  // int findFirstThe = str.find_first_of("the");
  // cout << "Finding the first of `the` at " << findFirstThe << endl;
  // int findLastThe = str.find_last_of("the");
  // cout << "Fing the last of `the` at " << findLastThe << endl;

  // int findFirstConsonant = str.find_first_not_of("aeiou");
  // cout << "First consonant found at position " << findFirstConsonant << endl;
  // int findLastConsonant = str.find_last_not_of("aeiou");
  // cout << "Last consonant found at position " << findLastConsonant << endl;

  /***************************
   * Modifying               *
  ****************************/
  string copy = str;
  copy.erase(0, 4); // string.erase(start_pos, end_pos(exclusive)) 
  copy = str;
  copy.replace(4, 5, "QUAGMIRE is a"); // string.replace(start_pos, number_of_chars_to_replace, string-to-replace-with);

  cout << copy << endl;

  return 0;
}

// Read till Page 333