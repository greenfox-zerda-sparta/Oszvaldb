/*
 * t08source.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: zoltanszabo
 */
#include <iostream>
#include <string>
#include "t08header.h"

using namespace std;


Pirate::Pirate(string name, unsigned int rum_counter) {
  Pirate::name = name;
  Pirate::rum_counter = rum_counter;
};

unsigned int Pirate::drink_rum() {
	return Pirate::rum_counter += 1;
}

string Pirate::hows_goin_mate() {
	if (Pirate::rum_counter > 4) {
	    	return "Arrrr!";
	    } else return "nothin'";
}
