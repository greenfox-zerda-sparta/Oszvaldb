#include <iostream>
#include <string>
#include <fstream>
#include "print_usage.hpp"

using namespace std;

string get_list();

int main(int argc, char* argv[]) {

	if (argc < 2) {
		print_usage();
	} else if (string (argv[1]) == "-l") {
		cout << get_list(); cout << endl;
	} else if (string (argv[1]) == "-a") {
		cout << "add"<< endl;
	} else if (string (argv[1]) == "-r") {
		cout << "remove"<< endl;
	} else if (string (argv[1]) == "-c") {
		cout << "complete"<< endl;
	} else {
		cout << "invalid command. please choose from the list: " << endl;
			print_usage();
	}
	//print_list();
	return 0;
}

string get_list() {
	string list_content;
	ifstream To_do_list("todo.txt");
	if (To_do_list.is_open()) {
		string line;
		while(To_do_list >> line) {
			list_content += line + "\n;";
		}
	}
	To_do_list.close();
	return list_content;
}
