#include <iostream>
#include <string>

using namespace std;

//int sum(int, int);
int sum(int numbers[], int length) {
	int b = 0;
	for (int i = 0; i <= length; i++){
		b = b + numbers[i];
	}
	return b;
}
int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  // write your own sum function
  // it should take an array and it's length
  cout << sum(numbers, 7);

  return 0;
}

