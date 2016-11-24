
#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>
void print_bigger_datatype(T1 a, T2 b){
	if(sizeof(T1) > sizeof(T2)) {
		cout << "T1 is stored in more bytes";
	} else if (sizeof(T1) < sizeof(T2)) {
		cout << "T2 is stored in more bytes";
	} else
		cout << "T1 and T2 are stored in the same amount of bytes";
}

int main() {
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then
	int a;
	double b;

	print_bigger_datatype(a, b);
  return 0;
}
