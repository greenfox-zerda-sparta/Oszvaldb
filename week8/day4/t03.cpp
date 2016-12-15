#include <iostream>
#include <string>

using namespace std;

int sum_of_digits (int a) {
	if (a == 0) {
		return 0;
	}
	return a % 10 + sum_of_digits(a / 10);
}

int main() {
// Given a non-negative int n,
// return the sum of its digits recursively (no loops).
// Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6),
// while divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
	cout << sum_of_digits(2536);
  return 0;
}
