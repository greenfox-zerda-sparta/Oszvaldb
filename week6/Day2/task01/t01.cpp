#include <iostream>
using namespace std;

// Write a try - catch block.
// Throw an integer in the try block
// Catch it in the catch block and write it out.

int main() {
	try {
		int a = 3;
		int b = 2;
		if ( a > b) {
			throw 1;
		}
	}
	catch (int x) {
		cout << "a > b" << endl;
	}
	return 0;
}
