
// In Your main function create an array of integers. 5 long.
// Fill it up with random numbers.
// For each number treat it as the radius of a circle.
// Calculate the circumference and the area of the circle with such a radius.
// Use preprocessor to define the MY_PI constant. Use this in th calculations.


#include <iostream>
using namespace std;

#define MY_PI 3.14

double circumference(int a) {
	return 2 * a * MY_PI;
}

double area(int b) {
	return b * b * MY_PI;
}

int main() {
	srand(time(NULL));
	int array[5];
	for (int i = 0; i < 5; i++) {
		array[i] = rand() % 10;
	}
	for(int j = 0; j < 5; j++) {
		cout << "radius:" << array[j] << ", circumference: " << circumference(array[j])
				<< ", area: " << area(array[j]) << endl;
	}
	return 0;
}
