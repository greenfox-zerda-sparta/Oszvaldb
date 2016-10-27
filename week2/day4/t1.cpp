#include <iostream>
#include <string>

using namespace std;

void duparray(int* array, int length) {
	for (int i = 0; i < length; ++i) {
	    array[i] *= array[i];
	}
}

void show(int array[], int length ) {
	for (int i= 0 ; i < 7; i++) {
		cout << array[i] << endl;
	}
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int length = 7;

  duparray(array, length);
  show(array, length);
  return 0;
}

