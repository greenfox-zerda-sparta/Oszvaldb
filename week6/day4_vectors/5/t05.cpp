#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//create a vector of integers with the size of 10, fill them with random numbers
	//create a vector of doubles and reserve place for 10 items
	//push and item to the end of the vector with the double places
	//print which vectors size is higher (and why?)
	srand(time(NULL));
	vector <int> v_int(10);
	for(unsigned int i = 0; i < v_int.size(); i++) {
		v_int[i] = rand() % 11;
	}
	vector <double> v_double;
	v_double.reserve(10);
	v_double.push_back(4.5);
	cout << v_int.size() << "|" << v_double.size() << "reserved 10, but filled it with only 1 item";
  return 0;
}
