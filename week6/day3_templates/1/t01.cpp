#include <iostream>
#include <string>

using namespace std;

template <typename T>

void print_T(T a[]) {
	cout << a[0];
}

int main() {
	// create a function template the takes in a fix long array and prints the 1st element of it
	int a[6];
	a[0] = 57;
	print_T(a);
  return 0;
}
