#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string read_file(string filename);

int main() {
  // Write a function that reads the content of a file and returns it as a string
  // It should take the filename as a string parameter
	read_file("exercise-sixth.txt");
  return 0;
}
string read_file(string filename) {
	ifstream my_file(filename);
	string file_content;
	while (getline(my_file, file_content)) {
		getline(my_file, file_content);
	}
	return file_content;
}
