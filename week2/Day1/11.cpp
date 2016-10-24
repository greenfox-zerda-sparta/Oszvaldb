#include <iostream>
#include <string>

using namespace std;

int main() {
	int k = 1521;
	int k3 = k%3;
	int k5 = k%5;
	if (k3&&k5==0) {
		cout << "dividable by 3 and 5";
	} else if (k3==0) {
		cout << "dividable by 3";
	}else if (k5==0) {
		cout << "dividable by 5";
	} else {
		cout << "dividable by none";
	}
	// tell if k is dividable by 3 or 5
	return 0;
}
