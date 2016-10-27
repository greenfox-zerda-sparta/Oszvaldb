#include <iostream>

using namespace std;

void revarray(int* array, int length) {
	for (int i = 0; i <= length/2; ++i) {
	    swap(array[i],array[length-i]);
	}
}

void show(int array[], int length ) {
	for (int i= 0 ; i <= length; i++) {
		cout << array[i] << endl;
	}
}

int main() {
  int length = 8;
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};

  // Write a function that takes an array and its length than reverses the array
  revarray(array,length);
  show(array, length);
  return 0;
}
