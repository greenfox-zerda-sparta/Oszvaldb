#include <iostream>
#include <string>

#include "t09_students_header.h"

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
  Student bob("Bob", 0, 0);
  bob.add_grade(bob, 4);
  bob.add_grade(bob, 5);
  bob.add_grade(bob, 3);
  cout << bob.get_average(bob);


  return 0;
}
