#include <iostream>

using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */

int* resize(int* pt_array, int* pt_new_size) {
  int* new_array = new int[*pt_new_size];
  /*for (int i = 0; i < *pt_new_size; i++) {
    new_array[i] = pt_array[i];
  }*/
	return new_array;
}

int* fill(int* pt_array, int* new_array, int* pt_new_size) {
	for (int i = 0; i < *pt_new_size; i++) {
	    new_array[i] = pt_array[i];

	}
	for (int j = 4; j < *pt_new_size; j++) { //should replace "4"(old size) with a pointer
		    new_array[j] = 0;
	}
	return new_array;
}

void print(int* new_array, int* pt_new_size) {
	for (int i = 0; i < *pt_new_size; i++) {
		cout << new_array[i] << ", ";
	}
}

int main() {
  int array[4] = {1, 2, 3, 4};
  int* pt_array = array;
  int new_size = 8;
  int* pt_new_size = &new_size;
  int* new_array = resize(pt_array, pt_new_size);
  fill(pt_array, new_array, pt_new_size);
  print(new_array, pt_new_size);
  delete[] new_array;
  return 0;
}
