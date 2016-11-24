#include <iostream>
#include <string>

using namespace std;

template <typename T>
T add(T array[]) {
	return array[0] + array[2];
}

int main() {
	// create a function template that takes 3 long array
	// and add the 1st element of it to the third
	int array[3] = {2 , 5, 4};
	cout << add(array);
  return 0;
}
