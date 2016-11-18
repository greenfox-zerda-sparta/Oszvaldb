/*
 * Task.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: zoltanszabo
 */

#include "Task.h"
#include <string>

Task::Task(std::string new_item) {
	item_ID = "0";
	item = new_item;
	completed = 0;
}

std::string Task::get_item_ID() {
	return item_ID;
}

void Task::set_item_ID (std::string item_ID) {
	this->item_ID = item_ID;
}

std:: string Task::get_item() {
	return item;
}

void Task::set_item(std::string text) {
	item = text;
}

bool Task::is_complete() {
	return completed;
}

void Task::set_complete(std::string ready) {
	if (ready == "0") {
		completed = false;
	} else if(ready == "1") {
		completed = true;
	}
}

Task::~Task() {
}

