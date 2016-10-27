#include <iostream>

using namespace std;

void fillarray(int* array, int length) {
	for (int i = 0; i <= length; ++i) {
	    array[i] = i;
	}
}

void show(int array[], int length ) {
	for (int i= 0 ; i <= length; i++) {
		cout << array[i] << endl;
	}
}


int main() {
  int length = 10;
  int array[(length+1)];

  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length
  fillarray(array,length);
  show(array, length);
  return 0;
}
