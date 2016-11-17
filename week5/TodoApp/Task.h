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
	std::string item;
	bool completed;
public:
	Task(std::string);
	std::string get_item();
	void set_item(std::string);
	void complete();
	bool is_complete();
	virtual ~Task();
};

#endif /* TASK_H_ */
