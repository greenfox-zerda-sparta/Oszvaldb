/*
 * Task.h
 *
 *  Created on: Nov 17, 2016
 *      Author: zoltanszabo
 */

#ifndef TASK_H_
#define TASK_H_
#include <string>


class Task {
private:
	std::string item_ID;
	std::string item;
	bool completed;
public:
	Task(std::string);
	std::string get_item();
	std::string get_item_ID();
	void set_item_ID(std::string);
	void set_item(std::string);
	void set_complete(std::string);
	bool is_complete();
	virtual ~Task();
};

#endif /* TASK_H_ */
