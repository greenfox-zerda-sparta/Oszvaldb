#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void write_file(string filename, string content);

int main() {
  // Write a function that writes a string to a file
  // It should take the filename and the content as a string parameter
	string filename = "exercise-seven";
	string content = "alma \n barack";
  write_file(filename, content);
  return 0;
}

void write_file(string filename, string content) {
	ofstream my_file(filename);
	my_file << content;
	my_file.close();
}
