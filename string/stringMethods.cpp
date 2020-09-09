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
  // string copy = str;
  // copy.erase(0, 4); // string.erase(start_pos, end_pos(exclusive)) 
  // copy = str;

  // copy.replace(4, 5, "QUAGMIRE is a"); // string.replace(start_pos, number_of_chars_to_replace, string-to-replace-with);
  // copy = str;

  // copy.insert(0, "Check "); // string.insert(start_pos, string);
  // copy = str;

  // copy.append(copy.size(), '!'); // string.append(number_of_time_char_appear, char);
  // // same as copy.append(copy.length, '!');

  // cout << copy << endl;

  /***************************
   * Modifying               *
  ****************************/
  string myFirstName = "bibek";
  string theirFirstName;
  cout << "Enter you first name: ";
  cin >> theirFirstName;

  cout << myFirstName.substr(3, 5) << endl; // string.substr(start_pos, end_pos(exclusive))

  cout << endl;
  if (myFirstName == theirFirstName) {
    cout << "Hey! Our first name matches! We are first name bros!" << endl;
  } else if (theirFirstName < myFirstName) {
    cout << "Your name comes before mine" << endl;
  } else {
    cout << "Your name come after mine" << endl;
  }

  return 0;
}

// Read till Page 333