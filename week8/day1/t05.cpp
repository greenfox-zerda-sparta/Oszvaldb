// Define a function like macro that prints out the parameter it gets,
// and adds this string before it "DEBUG: " if __DEBUG is defined.
// Otherwise adds "RELEASE: " before the string.
// Use try it out. Illustrate that it works.

#include <iostream>
using namespace std;


#ifdef __DEBUG
#define print(a) {cout << "Debug:" << #a << endl;}
#else
#define print(a) {cout << "Release:" << #a << endl;}
#endif

int main() {
	int b = 5;
	print(b);
	return 0;
}
