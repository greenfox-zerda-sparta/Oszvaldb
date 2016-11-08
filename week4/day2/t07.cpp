#include <iostream>
#include <string>

using namespace std;

class Car {
  private:
    string type;
    unsigned int km;
  public:
    Car (string type, unsigned int km) {
      this->type = type;
      this->km = km;
    }
   unsigned int run (unsigned int a) {
	  return this->km += a;
   }
};

int main() {
    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it
  Car mazda("Mazda", 30000);
  mazda.run(500);

  return 0;
}
