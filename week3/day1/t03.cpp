#include <iostream>

using namespace std;

/**
 * Please create a program that asks for a count when it starts.
 * It should ask for a number count times, then it shoud print the average of the nubmers.
 * It should delete any dynamically allocated resource before the program exits.
 */

int ask_count(int* pointer_count) {
  cout << "choose a number:" << endl;
  cin >> *pointer_count;
  return *pointer_count;
}

int* create_array(int* pointer_count) {
	//int sum = 0;
	int* array = new int[*pointer_count];
	for (int i = 0; i < *pointer_count; i++) {
		cout << "enter number " << i + 1 << ":" << endl;
		cin >> array[i];
	}
	cout << "numbers entered:" << endl;
	for (int i = 0; i < *pointer_count; i++) {
			cout << array[i] << " , ";
	}
	/*for (int j = 0; j < *pointer_count; j++) {
		sum += array[j];
	}
	cout << "average is:" << sum / *pointer_count << endl;
	delete[] array;*/
	return array;
}

void average(int array2[], int* pointer_count) {
  float sum = 0;
  for (int j = 0; j < *pointer_count; j++) {
	sum += array2[j];
  }
  cout << "average is:" << sum / *pointer_count << endl;
}

int main() {
  int count;
  int* pointer_count = &count;
  ask_count(pointer_count);
  int* array2 = create_array(pointer_count);
  average(array2, pointer_count);
  delete[] array2;
  return 0;
}
