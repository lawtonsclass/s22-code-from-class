#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void throwString() {
  string s = "blah";
  throw s;
}

void throwInt() {
  throw 42;
}

void throwRuntimeError() {
  runtime_error e("uh oh");
  throw e;
}

void doStuff() {
  try {
    throwInt();
    throwRuntimeError();
    throwString();
  } catch (int& i) {
    cout << "Caught an int in doStuff()! It was " << i << endl;
  } catch (runtime_error& e) {
    cout << "Caught a runtime_error in doStuff()! e.what(): " << e.what() << endl;
  }
}

int main() {
  try {
    doStuff();
  } catch (int& i) {
    cout << "Caught an int in main! It was " << i << endl;
  } catch (string& s) {
    cout << "Caught a string in main! It was " << s << endl;
  } catch (runtime_error& e) {
    cout << "Caught a runtime_error in main! e.what(): " << e.what() << endl;
  }

  return 0;
}
