/*
 * t02_source_square.cpp
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */


#include <t02_header_shape.h>
#include <t02_header_square.h>


class Square: public Shape {
  public:
    string* getName() {
      return new string("Square");
    }
    virtual Square::~Square();
};



