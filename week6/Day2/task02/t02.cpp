#include <iostream>
using namespace std;

// Write the body of the function below.
// It should throw an exception when b is zero.
// Check the result.


int division(int a, int b) throw (int) {
	if(b == 0) {
		throw 1;
	}
	else return a / b;

}

int main() {
	try {
		cout << "Divison result: " << division(1, 2) << endl;
		cout << "Division result: " << division(2, 0) << endl;
	}
	catch (int excp) {
		cout << "Exception: cannot divide by 0! " << excp << endl;
	}
	return 0;
}
