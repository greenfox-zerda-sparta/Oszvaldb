
// Create a constatn using a prepocesor directive.
// Print it out to the console.
// Undefine it. And then redefine it with a new value.
// Print it out again.

#include <iostream>

using namespace std;

#define INT 35
int int1(INT);
#undef INT
#define INT 76
int int2(INT);

int main() {
	cout << int1 << endl;
	cout << int2 << endl;

	return 0;
}
