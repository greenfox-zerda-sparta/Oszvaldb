#include <iostream>
#include <string>

using namespace std;

string add_a(string);
int main() {
  string k = "kuty";
  // write a function that gets a string as an input
  // and appends an 'a' character to its end
  string output;
  output = add_a(k);
  cout << output;
  return 0;
}
string add_a(string k) {
	k += "a";
	return k;
}
