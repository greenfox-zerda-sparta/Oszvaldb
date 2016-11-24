#include <iostream>
#include <string>

using namespace std;

template <typename T1, typename T2>

T1 add(T1 a, T2 b) {
	T1 c =  a + b;
	return c;
}
template <typename T1, typename T2>
T1 substract(T1 a, T2 b) {
	T1 c =  a - b;
	return c;
}

template <typename T1, typename T2>
T1 multiply(T1 a, T2 b) {
	T1 c =  a * b;
	return c;
}

template <typename T1, typename T2>
T1 divide(T1 a, T2 b) {
	if(b == 0) {
		throw "cannot divide by 0!!!";
	}
	T1 c =  a / b;
	return c;
}
int main() {
	//Create a class template for a calculator
        //it should have all the basic methods: add, subtract, multiply, divide
        //use exceptions to handle errors in special cases! (find the special cases!)
	//double a = 9.8;
	//float b = 6.7778;
	try {
		cout << "add: " << add(5.6 , 7.865) << endl;
		cout << "substract: " << substract(1 , 2.5) << endl;//returns int :(
		cout << "multiply: " << multiply(1 , 6) << endl;
		cout << "divide: " << divide(1.0 , 2) << endl;
		cout << "divide: " << divide(1.0 , 0) << endl;
	}
	catch(const char* excp){
		cout << "Exception: " << excp << endl;
	}
	return 0;
}
