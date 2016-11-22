#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL)); // This initializes the random generator.
	int rnd = 0;
	for (int i=0; i<20; i++) {
		rnd = rand() % 5; // generate a random number in the range [0, 4]
		try {
			switch (rnd) {
				case 0:
					throw 3.2f;
					break;
				case 1:
					throw double(43.56);
					break;
				case 3:
					throw "Abrakadabra";
					break;
				case 4:
					throw false;
					break;
				default:
					throw 12;
					break;
			}
		}

// Write catch blocks for each possibly thrown exception.
// In each catch block write out what the exception's type was. And what the exceptions value was.
	catch(const char* error_char_arr) {
		cout << "error type: char* " << error_char_arr << endl;
	}
	catch(double error_double) {
		cout << "error type: double " << error_double << endl;
	}
	catch(string error_string) {
		cout << "error type: string " << error_string << endl;
	}
	catch(bool error_bool) {
		cout << "error type: bool " << error_bool << endl;
	}
	catch(int error_int) {
		cout << "error type: int " << error_int << endl;
	}
	}
	return 0;
}
