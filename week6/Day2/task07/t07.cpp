#include <iostream>
#include <string>
using namespace std;

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

const char* sentence[6] = {"What", "a", "pleasant", "surprie", "this", "is."};

string decide(int number) {
	if(number < 0) {
		throw "number is a negative number";
	} else if(number > 5) {
		throw number;
	}
	return sentence[number];
}

int main() {
	try{
		cout << decide(-1) << endl;
	}
	catch(const char* error) {
			cout << error << endl;
		}
	try{
		cout << decide(2) << endl;
		cout << decide(23) << endl;
	}

	catch (int error) {
		cout << "number is too big by " << error - 5 << endl;
	}
	return 0;
}
