#include <iostream>
#include <string>

using namespace std;

int main() {
	string x = "monkey";
	// if the string is longer than 4 characters***
	// print 'Long!' otherwise print 'Short!'
	if (x.size()>4){
		cout << "long";
	}else {
		cout << "short";
	}

	return 0;
}
