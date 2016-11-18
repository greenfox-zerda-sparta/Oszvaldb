#include "print_usage.hpp"
#include <iostream>
#include <string>

using namespace std;

void print_usage() {
	cout << endl << "Command line Todo App" << endl
		<< "=====================" << endl << endl
		<< "-l list all tasks" << endl
		<< "-a add task" << endl
		<< "-r remove task" << endl
		<< "-c complete task" << endl
		<< "-ci incomplete task" << endl << endl;

}
