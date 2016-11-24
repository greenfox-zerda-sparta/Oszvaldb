#include <iostream>
#include <string>

using namespace std;

template <typename T>

void sort_descend(T array[], T size) {
 for (int i = 0; i < size; i++) {
	 for (int j = 0; j < size - 1; j++) {
		 if(array[j] < array[j + 1] ) {
			 swap(array[j], array[j + 1]);
		 }
	 }
 }
}

int main() {
	// create a function template that takes an array and sort it in a descending order
	int array[] = {4, 6, 3, 9, 5};
	int size = sizeof(array) / sizeof(int);
	sort_descend(array, size);
	for(int i = 0; i < size; i++) {
		cout << array[i] << ", ";
	}
  return 0;
}
