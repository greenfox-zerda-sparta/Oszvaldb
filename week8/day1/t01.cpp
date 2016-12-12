// Define 3 constants using a macro directive.
// One integer, one float and one string of characters.
// Print them out to the console in Your main funciton.
//

#include <iostream>
#include <string>

using namespace std;

#define INTEGER 273
#define FLOAT 36.759
#define str(x) #x

int main() {
	cout << INTEGER << endl;
	cout << FLOAT << endl;
	cout << str(string) << endl;

	return 0;
}
