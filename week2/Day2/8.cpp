#include <iostream>
#include <string>

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7};
	// print the sum of all numbers in h
  int i , sum = 0;
  for (i=0; i<5; i++) {
	  sum += h[i];
  }
  cout << sum;
  return 0;
}
