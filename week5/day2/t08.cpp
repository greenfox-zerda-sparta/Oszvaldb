#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool copy(string, string);

int main() {
  // Write a function that copies a file to an other
  // It should take the filenames as parameters
  // It should return a boolean that shows if the copy was successful
	copy("t08_source.txt", "t08_target.txt");
  return 0;
}

bool copy(string source, string target) {
	ifstream source_file(source);
	string file_content;
	ofstream target_file(target);
	if (!source_file.is_open() && !target_file.is_open()) {
		return false;
	}else
		while(getline(source_file, file_content)) {
			target_file << file_content + "\n";
		}
		source_file.close();
		target_file.close();
		return true;
}
