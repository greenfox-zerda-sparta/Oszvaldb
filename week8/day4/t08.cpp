#include <iostream>
#include <string>

using namespace std;

string x_y(string a, int index) {
	if(index == 0) {
		return a;
	}
	if(a[index] == 'x') {
	a.erase(index, 1);   //string.erase (position, length );
	}
	return x_y(a, index -1);
}

int main() {
// Given a string, compute recursively a new string where all the 'x' chars have been removed.
	string a = "axaxayax";
	int index = a.length();
	cout << x_y(a, index);
  return 0;
}
