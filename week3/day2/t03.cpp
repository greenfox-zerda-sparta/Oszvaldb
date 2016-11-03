#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

string car_names[4] = {"VOLVO", "TOYOTA", "LAND_ROVER", "TESLA"};

struct Car {
  CarType type;
  double km;
  double gas;
};

// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

void print_stats(Car input) {
	cout << car_names[input.type] << ": " << input.km << "km; ";
	if (input.type != TESLA ) {
		cout<< input.gas;
	}
}

int main(int argc, char** argv) {
  Car Volvo = {VOLVO, 500, 50};
  Car Toyota = {TOYOTA, 550, 55};
  Car Land_rover = {LAND_ROVER, 450, 55};
  Car Tesla = {TESLA, 400};
  //string car_names[4] = {"VOLVO", "TOYOTA", "LAND_ROVER", "TESLA"};
  print_stats(Toyota);
  return 0;
}
