#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Open a file called "first-exercise.txt"
    // Write your name in it as a single line
    ofstream my_name;
    my_name.open("first-exercise.txt");
    my_name << "Oszi/n";
    my_name.close();

    return 0;
}