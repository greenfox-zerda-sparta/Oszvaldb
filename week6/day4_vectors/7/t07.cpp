#include <iostream>
#include <string>
#include <vector>

using namespace std;

void fill_vector(vector <int>& new_v) {
	for(unsigned int i = 0; i < new_v.size(); i++) {
		new_v[i] = rand() % 11;
	}
}

void print_vector(vector <int>& new_v) {
	for(unsigned int i = 0; i < new_v.size(); i++) {
		cout << new_v[i] << "|";
	}
}

void remove_even(vector <int>& new_v) {
	int counter = 0;
	for(unsigned int i = 0; i < new_v.size(); i++) {
		if((new_v[i - counter] %2) == 0) {
			new_v.erase(new_v.begin() + i - counter);
			counter++;
		}
	}
}
int main() {
	//create a vector of integers with the size of 20
	//fill this vector with random numbers from 0 to 10
	//print the items of the vector
	//remove the even numbers, then print the items again
	vector <int> v(20);
	srand(time(NULL));
	fill_vector(v);
	print_vector(v);
	cout << endl;
	remove_even(v);
	cout << endl;
	print_vector(v);

  return 0;
}
