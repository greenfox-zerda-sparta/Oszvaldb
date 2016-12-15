#include <iostream>
#include <string>

using namespace std;

int powerN(int base, int power) {
	if (power == 0) {
		return 1;
	}
	return base * powerN(base, power -1);
}

int main() {
// Given base and n that are both 1 or more, compute recursively (no loops)
// the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
	cout << powerN(2, 4);
  return 0;
}
