
#include <iostream>

using namespace std;

int main() {
  int* pointer = new int[5];
  for (int i = 0; i < 5; i++) {
	  pointer[i] = i;
  }
  for (int i = 0; i < 5; i++) {
	  cout << pointer[i];
  }
  delete[] pointer;
  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  return 0;
}
