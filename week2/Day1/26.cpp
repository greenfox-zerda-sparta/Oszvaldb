#include <iostream>
#include <string>

using namespace std;

int main() {
	// Write a program that prints the numbers from 1 to 100.
	// But for multiples of three print "Fizz" instead of the number
	// and for the multiples of five print "Buzz".
	// For numbers which are multiples of both three and five print "FizzBuzz".

	int a = 0;
	do { a = a + 1;
		if (a%15==0){
			cout << "FizzBuzz,";
		} else if (a%5==0) {
			cout << "Fizz,";
		}else if (a%3==0) {
			cout << "Buzz,";
		} else {
			cout << a << ",";
		}
	}
	while (a<101);
		return 0;
}
