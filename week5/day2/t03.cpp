#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  // Open a file called "third-exercise.txt"
  // Write numbers from 0 to 20 into the file each in a new line
  ofstream numbers_file;
  numbers_file.open("exercise-third.txt");

  for (int i = 0; i < 21; i++) {
    numbers_file << i << endl;
  }
  numbers_file.close();


  return 0;
}
