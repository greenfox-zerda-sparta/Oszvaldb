#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	//Create a vector of integers
	//reserve place for 10 element, then fill those place with random numbers between 0 and 10
	srand(time(NULL));
	vector <int> v(10);
	for(unsigned int i = 0; i < v.size(); i++) {
		v[i] = rand() % 11;
	}
  return 0;
}
