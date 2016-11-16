#include <iostream>
#include <string>
#include <fstream>
#include "print_usage.hpp"

using namespace std;

string list();

int main(int argc, char* argv[]) {

	if (argc < 1) {
		print_usage();
	} else if (string (argv[1]) == "-l") {
		cout << list << endl;
	} else if (string (argv[1]) == "-a") {
		cout << "add"<< endl;
	} else if (string (argv[1]) == "-r") {
		cout << "remove"<< endl;
	} else if (string (argv[1]) == "-c") {
		cout << "complete"<< endl;
	} else
		cout << "invalid command. please choose from the list: " << endl;
			print_usage();

	return 0;
}

string list() {
	string list;
	ifstream To_do_list("todo.txt");
	if (To_do_list.is_open()) {
		while(To_do_list >> list) {
			To_do_list >> list;
			cout << list;
		}
	}
	To_do_list.close();
	return list;
}
