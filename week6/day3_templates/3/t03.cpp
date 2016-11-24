
#include <iostream>
#include <string>

using namespace std;

template <typename T>

void print_array (T array[], T size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
}

int main() {
	// create a function template which takes in an array, and the size of it
	// print all the elements of the array
	int array[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(array) / sizeof(int);
	print_array(array, size);
  return 0;
}
