#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Write a program that prints a content of a file called "fifth-exercise.txt"
  // If it could not open the file it should write: "Could not open the file" to the standard error
  // The program should return 2 if there where an error

	ifstream my_file("exercise-fifth.txt");
	if (my_file.is_open()) {
		string file_content;
		while(my_file >> file_content) {
			cout << file_content << endl;
		}
				return 0;
	}
		cout << "Could not open the file" << endl;
				return 2;
}
