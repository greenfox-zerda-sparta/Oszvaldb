#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of chars with the size of zero;
	//write a function where the user can add characters to the end of this vector
	vector <char> v(0);
	char input = 'a';
	cin >> input;
	while (input != 'x') {
		v.push_back(input);
		cin >> input;
	}
  return 0;
}
