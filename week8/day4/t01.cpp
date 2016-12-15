#include <iostream>
#include <string>

using namespace std;

int final_countdown (int a) {
	if (a == 0) {
		return 0;
	}
	cout << a << ", ";
	return final_countdown(a - 1);
}

int main() {
// write a recursive function
// that takes one parameter: n
// and counts down from n

	final_countdown(5);

  return 0;
}
