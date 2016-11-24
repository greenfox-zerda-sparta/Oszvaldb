#include <iostream>
#include <string>

using namespace std;

template <typename T1>

int sum(T1 array[], int size) {
	int sum_of_array = 0;
	for(int i = 0; i < size; i++) {
		sum_of_array += array[i];
	}
	return sum_of_array;
}

int main() {
  // Create a function template that takes an array, and its length and return the sum of his elements
  // Create a template specialization for char types, that it returns the sum of the characters integer position in the alphabet
  // Create a template specialization for string types, that it returns the sum of the string's first characters position in the alphabet
	int array[] = {4, 6, 3, 9, 5}; //part 1: sum of elements
	int size = sizeof(array) / sizeof(array[0]);
	char char_array[] = "abcd"; // part 2: sum of alphabet positions
	int char_size = 4;
	cout << sum<int>(array, size) << endl;
	cout << sum(char_array, char_size) - char_size * 96; // works with small ascii characters
	return 0;
}
