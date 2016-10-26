#include <iostream>

using namespace std;



int main() {
  int high_number = 6655;
  int low_number = 2;

  int* hight_number_pointer = &low_number;
  int* low_number_pointer = &high_number;
  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.
  swap(hight_number_pointer, low_number_pointer);
  cout << "H" << *hight_number_pointer << endl;
  cout << "H" << high_number << endl;
  cout << "L" << *low_number_pointer << endl;
  cout << "L" << low_number << endl;


  return 0;
}
