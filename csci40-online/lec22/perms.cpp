#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> perms(string s) {
  if (s == "") {
    // base case
    vector<string> result = {""};
    return result;
  } else {
    // recursive case
    vector<string> result;
    for (int i = 0; i < s.size(); i++) {
      // pick a starting character    
      char startingChar = s.at(i);
      // recursively scramble the remaining chars
      string smallerString = s;
      smallerString.erase(i, 1); // erases the ith char
      vector<string> smallerStringPerms = perms(smallerString);
      // add startingChar to the start of every string in smallerStringPerms
      // (and then add that new string to result)
      for (string smallerStringPerm : smallerStringPerms) {
        string newString = startingChar + smallerStringPerm;
        result.push_back(newString);
      }
    }
    return result;
  }
}

int main() {
  vector<string> p = perms("abc");
  for (string s : p) {
    cout << s << endl;
  }

  return 0;
}
