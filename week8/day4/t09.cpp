#include <iostream>
#include <string>

using namespace std;

string x_y(string a, int index) {
	if(index == 0) {
		return a;
	}
	a.insert(index, "*");   //string.erase (position, length );
	return x_y(a, index -1);
}

int main() {
// Given a string, compute recursively a new string where all the
// adjacent chars are now separated by a "*".
	string a = "axaxayax";
	int index = a.length();
	cout << x_y(a, index);
  return 0;
}
