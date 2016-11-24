#include <iostream>
#include <string>
#include <vector>

using namespace std;

int find_divisors(int a) {
	double counter = 0;
	for (int i = 1; i <= a; i++) {
		if(a % i == 0) {
			counter++;
		}
	}
	return counter;
}

void fill_vector(vector <double>& new_v) {
	for(unsigned int i = 0; i < new_v.size(); i++) {
		new_v[i] = rand() % 2401;
	}
}

void sort_ascend(vector <double>& new_v, int size) {
 for (int i = 0; i < size; i++) {
	 for (int j = 0; j < size - 1; j++) {
		 if(new_v[j] > new_v[j + 1] ) {
			 iter_swap(new_v.begin() + j, new_v.begin() + j + 1);
		 }
	 }
 }
}

void print_vector(vector <double>& new_v) {
	for(unsigned int i = 0; i < new_v.size(); i++) {
		cout << new_v[i] << "|";
	}
}

int main() {
	//find how much integer divisor 2400 has
	//create a vector of doubles, reserve place for the divisors of 2400
	//fill this places with random numbers from 0 to 2400
	//sort them in ascending order
	int number = 2400;
	vector <double> v(find_divisors(number));
	srand(time(NULL));
	int size = v.size();
	fill_vector(v);
	sort_ascend(v, size);
	print_vector(v);
  return 0;
}
