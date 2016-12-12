// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#include <iostream>
using namespace std;

#define print(a) {cout << a << endl;}

int main() {
	int b = 5;
	print(b);
	return 0;
}
