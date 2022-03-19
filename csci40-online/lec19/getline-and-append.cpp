#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream ofs("out.txt", ios_base::app); 

  while (true) {
    cout << "Enter a line (or q to quit): ";
    string line;
    getline(cin, line);

    if (line == "q") {
      break;
    }

    // append the line to the file
    ofs << line << endl;
  }

  ofs.close();

  return 0;
}
