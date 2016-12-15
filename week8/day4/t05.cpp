#include <iostream>
#include <string>

using namespace std;

int add_ears (int bunnies) {
	if (bunnies == 0) {
		return 0;
	}

	return 2 + add_ears(bunnies - 1);
}

int main() {
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).
	cout << add_ears(5);
  return 0;
}
