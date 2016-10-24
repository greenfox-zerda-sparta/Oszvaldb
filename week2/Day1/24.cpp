#include <iostream>
#include <string>

using namespace std;

int main() {
	int ae = 4;
	string text = "Gold";
	// print content of the text variable ae times
	do {
		cout << text;
		ae = ae - 1;
	} while (ae > 0);

	return 0;
}
