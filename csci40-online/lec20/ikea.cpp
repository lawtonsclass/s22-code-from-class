#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
  srand(time(0));

  ifstream ifs("SwedishWords.txt"); 

  string word;
  vector<string> words;
  while (ifs >> word) {
    words.push_back(word);
  }
  ifs.close();

  // pick two random words from the vector and print them out
  string word1 = words.at(rand() % words.size());
  string word2 = words.at(rand() % words.size());

  cout << word1 << word2 << endl;

  return 0;
}
