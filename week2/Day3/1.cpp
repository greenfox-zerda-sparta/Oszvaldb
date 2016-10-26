#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  // print the memory address of the variable
  int *adress_of_number = &number;
  cout << adress_of_number;
  return 0;
}
