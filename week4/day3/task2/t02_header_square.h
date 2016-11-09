/*
 * t02_header_square.h
 *
 *  Created on: Nov 9, 2016
 *      Author: zoltanszabo
 */

#ifndef T02_HEADER_SQUARE_H_
#define T02_HEADER_SQUARE_H_

#include <iostream>
#include <string>

using namespace std;

class Square: public Shape {
  public:
    string* getName();
    virtual ~Square();
};


#endif /* T02_HEADER_SQUARE_H_ */
