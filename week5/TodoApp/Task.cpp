/*
 * Task.cpp
 *
 *  Created on: Nov 17, 2016
 *      Author: zoltanszabo
 */

#include "Task.h"
#include <string>

Task::Task(std::string new_item) {
	item = new_item;
	completed = false;
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

void Task::complete() {
	completed = true;
}

Task::~Task() {
}

