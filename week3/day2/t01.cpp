#include <string>
#include <iostream>

using namespace std;

struct Computer {
  string name;
  long int cpu_speed_hz;
  long int ram_size;
};

int main() {
  Computer computer = {"Macbook", 3.2e9, 8e9};
  computer.name = "Macbook Pro";

  // Change the name of the computer to "Macbook Pro" and print all the stats
  cout << computer.name << ": " << computer.cpu_speed_hz << "; " << computer.ram_size;

  return 0;
}
