#include <iostream>
#include <string>
#include <vector>

using namespace std;

void add_vector(vector< vector <int> >& outer, vector <int>& inner) {
	outer.push_back(inner);
}

int main() {
	//create a vector of vector of integers, yeah a vector that holds vectors of integers
	//the inner vectors have 5 integers, all of them 0
	//the outer vector is holding 5 vector at the begining
	//create a function that will add a new vector of integers to the end of our outer vector
	vector <vector <int> >vector_of_vectors(5);
	vector <int> vector_inner(5,0);

	add_vector(vector_of_vectors, vector_inner);
	cout << vector_of_vectors.size();
 return 0;
}
