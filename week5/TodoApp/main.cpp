#include <iostream>
#include <string>
#include <fstream>
#include "print_usage.hpp"
#include "Task.h"
#include "Itemhandler.h"

using namespace std;

string get_list();

int main(int argc, char* argv[]) {
	Item_handler* todo = new Item_handler;

	if (argc < 2) {
		print_usage();
	} else if (string (argv[1]) == "-l") {
		todo->list();
	} else if (string (argv[1]) == "-a") {
		todo->add_item(" ", "[ ]", argv[2]);
	} else if (string (argv[1]) == "-r") {
		todo->remove_item(argv[2]);
	} else if (string (argv[1]) == "-c") {
		todo->complete_task(argv[2]);
	} else {
		cout << "invalid command. please choose from the list: " << endl;
			print_usage();
	}
	delete todo;

	return 0;
}

string get_list() {
	string list_content;
	ifstream ToDoList("todo.txt");
	if (ToDoList.is_open()) {
		string number;
		string is_done;
		string todo;
		while(ToDoList >> number >> is_done >> todo) {
			list_content += (number + is_done + todo + "\n");
		}
	}
	ToDoList.close();
	return list_content;
}
