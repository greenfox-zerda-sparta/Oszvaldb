#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create an integer vector with the size of 5 and print all elements of it
	vector <int> v(5);
	for(unsigned int i = 0; i < v.size(); i++) {
		v[i] = i + 1;
	}

	for(unsigned int i = 0; i < v.size(); i++) {
		cout << v[i] << "|";
	}
  return 0;
}
