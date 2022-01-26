#include <iostream>
using namespace std;

int main() {
  for (int numHorses = 0; numHorses <= 100; numHorses++) {
    for (int numPigs = 0; numPigs <= 100; numPigs++) {
      for (int numRabbits = 0; numRabbits <= 100; numRabbits++) {
        // each time I get here, I have a different amount of horses,
        // pigs, and rabbits
        // lets see if this amount of horses/pigs/rabbits solves the
        // problem
        int numAnimals = numHorses + numPigs + numRabbits;
        double price = numHorses * 10 + numPigs * 3 + numRabbits * 0.50;

        if (numAnimals == 100 && price == 100.0) {
          cout << numHorses << " horses, " 
               << numPigs << " pigs, and " 
               << numRabbits << " rabbits\n";
        }
      }
    }
  }

  return 0;
}
