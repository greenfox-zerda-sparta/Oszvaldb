#include <iostream>
#include <string>

using namespace std;

string x_y(string a, int index) {
	if(index == 0) {
		return a;
	}
	if(a[index] == 'x') {
		a[index] = 'y';
	}
	return x_y(a, index -1);
}

int main() {
// Given a string, compute recursively (no loops) a new string where all the
// lowercase 'x' chars have been changed to 'y' chars.
	string a = "axaxaxax";
	int index = a.length();
	cout << x_y(a, index);
  return 0;
}
