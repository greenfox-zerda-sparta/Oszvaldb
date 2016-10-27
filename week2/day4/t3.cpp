#include <iostream>

using namespace std;

void change(int* pointer1, int* pointer2) {
	swap(*pointer1, *pointer2);
}

int main() {
  int first = 12;
  int second = 54;
  int* pointer1 = &first;
  int* pointer2 = &second;
  change(pointer1,pointer2);
  cout << first;

  // Write a function that takes two int pointers and swaps the values where the pointers point

  return 0;
}
