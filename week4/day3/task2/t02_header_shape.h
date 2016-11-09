/*
 * header_shape.h
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */
#ifndef T02_HEADER_SHAPE_H_
#define T02_HEADER_SHAPE_H_

#include <iostream>
#include <string>

using namespace std;

class Shape{
  protected:
    string shape_name;
  public:
    string* getName();
    virtual ~Shape();
};

#endif /* T02_HEADER_SHAPE_H_ */
