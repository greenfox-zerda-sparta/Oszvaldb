#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int* hight_number_pointer = &high_number;
  int* other_high_number_pointer = hight_number_pointer;
  // The "other_high_number_pointer" should point to the same memory address
  // without using the "&" operator.
  //testing:
  cout << *hight_number_pointer << endl;
  cout << *other_high_number_pointer <<endl;
  high_number += 10;
  cout << *hight_number_pointer << endl;
  cout << *other_high_number_pointer <<endl;
  *other_high_number_pointer = 6675;
  cout << *hight_number_pointer << endl;
  cout << *other_high_number_pointer <<endl;
  return 0;
}