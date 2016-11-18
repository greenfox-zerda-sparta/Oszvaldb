/*
 * Itemhandler.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: zoltanszabo
 */

#include "Itemhandler.h"
#include <fstream>
#include <iostream>

Item_handler::Item_handler() {
	std::ifstream ToDoList("todo.txt");
	std::string ID_string;
	std::string is_done;
	std::string todo;
	if (ToDoList.is_open()) {
		item_count = 0;
		while (getline (ToDoList, ID_string, ','), getline (ToDoList, is_done, ','), getline (ToDoList, todo)) {
			add_item(ID_string, is_done, todo);
		}
	}else {
		item_count = 0;
		items = NULL;
	}
	ToDoList.close();
}

void Item_handler::list() {
	std::ifstream ToDoList("todo.txt");
	std::string ID_string;
	std::string is_done;
	std::string todo;
	if (ToDoList.is_open()) {
		while (getline (ToDoList, ID_string, ','), getline (ToDoList, is_done, ','), getline (ToDoList, todo)) {
			std::cout << ID_string << ','<< is_done << ','<< todo << std::endl;
		}
	}

	/*std::string line;
	if(items != NULL) {
		for (int i = 0; i < item_count; i++) {
			line += (items[i]->get_item_ID(), ',', items[i]->is_complete(),',', items[i]->get_item() + "\n");
		}*/
}

void Item_handler::add_item(std::string number, std::string is_done, std::string new_item) {
	Task* new_task = new Task(new_item);
	Task** temp = new Task*[item_count + 1];
	if (items!= NULL) {
		for (int i = 0; i < item_count + 1; i++) {
			temp[i] = items[i];
			;
		}
	}
		temp[item_count] = new_task;
		std::string s = std::to_string(item_count);
		temp[item_count]->set_item_ID(s);
		if (is_done == "1") {
			temp[item_count]->set_complete("1");
		}

		//delete[] items; //memory leak?
		items = temp;
		item_count++;
}

void Item_handler::complete_task(std::string item) {
	if(items != NULL) {
		for (int i = 0; i < item_count; i++) {
			if (items[i]->get_item() == item) {
				items[i]->set_complete("1");
			}
		}
	}
}

void Item_handler::remove_item(std::string item) {
	if(items != NULL) {
		for (int i = 0; i < item_count; i++) {
			if (items[i]->get_item() == item) {
				items[i]->set_item("");
			}
		}
	}
}

Item_handler::~Item_handler() {
	std::ofstream ToDoList("todo.txt");
	for(int i = 0; i < item_count; i++) {
		ToDoList << i+1 << ',' << items[i]->is_complete() << ',' << items[i]->get_item() + '\n';
	}
	ToDoList.close();
}

