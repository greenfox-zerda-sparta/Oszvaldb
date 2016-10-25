#include <iostream>
#include <string>

using namespace std;

void greet(){
	cout << "Hello";
}
int main() {
  string i = "Oszi";
  // create a function that takes a string argument and greets it.
  greet();
  cout <<" " <<  i << "!";
  return 0;
}
