#include <iostream>

using namespace std;

/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int* range(int* pt_from, int* pt_to, int* pt_step) {
	int* arr = new int[(*pt_to - *pt_from) / *pt_step];
	for ( int i = 0; i < (*pt_to - *pt_from) / *pt_step; i ++) {
		arr[i] = *pt_from + (*pt_step * i);
	}
	return arr;
}

void print(int array[], int length)  {
	for (int i = 0; i < length; i++) {
		cout << array[i] << ", ";
	}
}

int main() {
  int from = 1;
  int* pt_from = &from;
  int to = -8;
  int* pt_to = &to;
  int step = -3;
  int* pt_step = &step;
  int length = (to - from) / step;
  int *array = range(pt_from, pt_to, pt_step);
  print(array, length);
  delete[] array;
  return 0;
}
