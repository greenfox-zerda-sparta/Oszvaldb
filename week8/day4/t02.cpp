#include <iostream>
#include <string>

using namespace std;

int add_nums (int a) {
	if (a == 0) {
		return 0;
	}
	cout << a << ", ";
	return a + add_nums(a - 1);
}

int main() {
// write a recursive function
// that takes one parameter: n
// and adds numbers from 1 to n
	cout << add_nums(5);
  return 0;
}
