#include <iostream>
#include <string>
#include <vector>

using namespace std;

void increase_inner(vector <int>& v) {
	for (unsigned int i = 0; i < v.size(); i++) {
		v[i]++;
	}
}

void print_vector(vector < vector<int> >& vector_of_vectors){
	for (unsigned int i = 0; i < vector_of_vectors.size(); i++) {
		for(unsigned int j = 0; j < vector_of_vectors[i].size(); j++) {
			cout << vector_of_vectors[i][j];
		}
		cout << endl;
		}
}


int main() {
	//create a vector of vector of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector
	//create a function which increase the given inner vector elements by 1 (one inside vector, holding five 0)
	vector <vector <int> >vector_of_vectors(5, vector <int> (5,0));
	increase_inner(vector_of_vectors[1]);
	print_vector(vector_of_vectors);
	return 0;
}
