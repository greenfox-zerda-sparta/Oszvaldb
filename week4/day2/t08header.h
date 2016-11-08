/*
 * t08header.h
 *
 *  Created on: Nov 8, 2016
 *      Author: zoltanszabo
 */
#include <iostream>
#include <string>
#ifndef T08HEADER_H_
#define T08HEADER_H_

using namespace std;

class Pirate {
  public:
    string name;
    unsigned int rum_counter;
    Pirate (string name, unsigned int rum_counter);
    unsigned int drink_rum();
    string hows_goin_mate();
};

#endif /* T08HEADER_H_ */
