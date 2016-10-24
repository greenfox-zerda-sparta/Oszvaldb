
#include <iostream>
#include <string>

using namespace std;

int main() {
	int j1 = 10;
	int j2 = 3;
	// tell if j1 is higher than j2 squared and smaller than j2 cubed
	if (j2*j2>j1) {
		cout << "j2 squared bigger";
	} else if (j2*j2*j2>j1) {
		cout << "between";
	} else {
		cout << "j1 bigger";
	}

	return 0;
}
