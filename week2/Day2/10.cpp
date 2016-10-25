#include <iostream>
#include <string>

using namespace std;

int duplicate (int);

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  int input=0;
  cin >> input;
  cout << "you entered:" << input << endl;
  cout << "it's double is:" << duplicate (input) << endl;
  cout << "doubled with j is:" << j * duplicate (input) << endl;

  return 0;
}
int duplicate (int input) {
  //cout << "you entered:" << input << endl;
  input *=2;
  //cout << "it's double is:" << input << endl;
  return input;

}
