#include <iostream>
#include <string>

using namespace std;

template <typename T>

class Test {
private:
	T value1, value2;
public:
	Test(T a, T b) {
		value1 =a ; value2 = b;
	}
	void set_value1(T set_value);
	T get_value1();
	void set_value2(T set_value);
		T get_value2();
};

int main() {
	//Create a simple class template which contains 2 item and has both a get and a set method for these!
  return 0;
}
