#include <iostream>
#include <stdexcept> // for runtime_error
#include <string>
using namespace std;

void throwString() {
  string s = "blah";
  throw s;
}

void throwInt() {
  throw 42;
}

void throwRuntimeError() {
  runtime_error re("Uh oh!");
  throw re;
}

void doStuff() {
  try {
    throwString();
    throwRuntimeError();
    throwInt();
  } catch (string& s) {
    cout << "Caught a string in doStuff: " << s << endl;
  } catch (runtime_error& e) {
    // I know how to handle an runtime_error exception!
    cout << "Caught a runtime_error in doStuff: " << e.what() << endl;
  }
}

int main() {
  try {
    // the very first exception gets handled, and that's the end of
    // the entire try/catch block
    doStuff();
  } catch (string& s) {
    // I know how to handle a string exception!
    cout << "Caught a string in main: " << s << endl;
  } catch (int& i) {
    // I know how to handle an int exception!
    cout << "Caught an int in main: " << i << endl;
  } catch (runtime_error& e) {
    // I know how to handle an runtime_error exception!
    cout << "Caught a runtime_error in main: " << e.what() << endl;
  }

  return 0;
}
