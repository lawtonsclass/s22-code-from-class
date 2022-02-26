#include <iostream>
using namespace std;

// this is a global variable -- it lives for the entire program
int harryPotter = 42;

void gobletOfFire() {
  int cedric = 8; // this is a local variable--it only lives for the life of the function
  cedric++;
  cout << cedric << endl;

  cout << harryPotter << endl; 
}

int main() {
  gobletOfFire();

  harryPotter++;
  cout << harryPotter << endl; 

  // cout << cedric << endl; // cedric is already dead :(

  return 0;
}
