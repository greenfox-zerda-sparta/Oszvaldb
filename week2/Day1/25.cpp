#include <iostream>
#include <string>

using namespace std;

int main() {
	// print the even numbers till 20
	int a = 0;
	do { a = a +1;
		if (a % 2 ==0) {
			cout << a;
		}

	}
	while (a < 21);
	return 0;
}
