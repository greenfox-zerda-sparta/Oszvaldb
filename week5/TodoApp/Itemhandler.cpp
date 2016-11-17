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
	std::string line;
	if (ToDoList.is_open()) {
		item_count = 0;
		while (getline(ToDoList, line)) {
			add_item(line);
		}
	}else {
		item_count = 0;
		items = NULL;
	}
	ToDoList.close();
}

void Item_handler::add_item(std::string new_item) {
	Task* new_task = new Task(new_item);
	Task** temp = new Task*[item_count + 1];
	if (items!= NULL) {
		for (int i = 0; i < item_count + 1; i++) {
			temp[i] = items[i];
		}
	}
		temp[item_count] = new_task;
		//delete[] items; //memory leak?
		items = temp;
		item_count++;
}

void Item_handler::complete_task(std::string item) {
	if(items != NULL) {
		for (int i = 0; i < item_count; i++) {
			if (items[i]->get_item() == item) {
				items[i]->complete();
			}
		}
	}
}

void Item_handler::remove_item(std::string item) {
	if(items != NULL) {
		for (int i = 0; i < item_count; i++) {
			if (items[i]->get_item() == item) {
				items[i]->set_item(" ");
			}
		}
	}
}

Item_handler::~Item_handler() {
	std::ofstream ToDoList("todo.txt");
	for(int i = 0; i < item_count; i++) {
		ToDoList << items[i]->get_item() + "\n";
	}
	ToDoList.close();
}

