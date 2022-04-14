#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> v = {1, 2, 3}; 

  try {
    // put all code that could throw an exception inside the try block
    cout << v.at(3) << endl;
  } catch (out_of_range& e) {
    // if an out_of_range exception was thrown by the code in the try
    // block, then we jump here and start running the code to handle
    // the exception
    cout << "Uh oh! An out_of_range was thrown :(\n";
  }

  return 0;
}
