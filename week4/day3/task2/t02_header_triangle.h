/*
 * t02_header_triangle.h
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */

#ifndef T02_HEADER_TRIANGLE_H_
#define T02_HEADER_TRIANGLE_H_

#include <iostream>
#include <string>

using namespace std;

class Triangle: public Shape {
  public:
    string* getName();
    virtual ~Triangle();
};



#endif /* T02_HEADER_TRIANGLE_H_ */
