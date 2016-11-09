/*
 * t02_source_triangle.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */

#include <t02_header_shape.h>
#include <t02_header_triangle.h>


class Triangle: public Shape {
  public:
    string* getName() {
      return new string("Triangle");
    }
    virtual Triangle::~Triangle();
};

