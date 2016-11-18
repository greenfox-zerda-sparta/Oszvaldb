/*
 * Itemhandler.h
 *
 *  Created on: Nov 17, 2016
 *      Author: zoltanszabo
 */

#ifndef ITEMHANDLER_H_
#define ITEMHANDLER_H_
#include "task.h"

class Item_handler {
private:
	unsigned int item_count;
	Task** items;
public:
	Item_handler();
	void list();
	void add_item(std::string, std::string, std::string);
	void remove_item(std::string);
	void complete_task(std::string);
	virtual ~Item_handler();
};

#endif /* ITEMHANDLER_H_ */
