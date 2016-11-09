/*
 * t02_source_shape.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */

#include "t02_header_shape.h"


class Shape {
  protected:
    string shape_name;
  public:
    string* getName() {
      return new string("Shape");
    }
    virtual Shape::~Shape();
};



