#include <iostream>
#include <string>
using namespace std;

// Write a function that receives a string and an unsigned integer.
// The function should return an array of strings, with two string in it.
// The first string should be the first part of the original string
// Characters in range [0,index-1].
// The second part should be the rest of the string characters range [index,length-1]
// Example: split("Rebarbara", 2)
// Result: {"Re", "barbara"}
// If the index is out of bounds, throw an exception.
//
// In the main function demonstrate the function when working, and when throwing an exception.
// Write the results to the console.

string* split( string orig, int split_at) {
	string* splitted = new string[2];
	if(split_at > orig.length()){
		throw "index out of bounds";
	}
	for(int i = 0; i < split_at; i++) {
		splitted[0] += orig[i];
	}
	splitted[0] += '\0';
	for(int j = split_at; j <= orig.length() ; j++) {
		splitted[1] += orig[j];
	}
	return splitted;
	delete splitted;
}

int main() {
	try{
		string* splitted = split("rebarbara" , 2);
		cout << splitted[0] << ", " << splitted[1] << endl;
		string* splitted2 = split("rebarbara" , 10);
		cout << splitted2[0] << ", " << splitted2[1] << endl;

	}
	catch (const char* excp) {
		cout << "Exception: " << excp << endl;
	}

	return 0;
}
