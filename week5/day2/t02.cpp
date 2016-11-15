#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open a file called "second-exercise.txt"
    // Read the content of the file and print it to the terminal window
    ifstream my_file; // Creates an object that represents a file
    my_file.open("second-exercise.txt"); // The object opens the file called "example.txt"
    string file_content;
    my_file >> file_content; // Reads a line from the file and puts it into the variable called file_content
    my_file.close(); // Closes the object
    cout << file_content;

    return 0;
}