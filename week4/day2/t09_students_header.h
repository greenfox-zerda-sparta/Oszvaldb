/*
 * students_header.h
 *
 *  Created on: Nov 8, 2016
 *      Author: zoltanszabo
 */
#include <iostream>
#include <string>
#ifndef STUDENTS_HEADER_H_
#define STUDENTS_HEADER_H_

using namespace std;

class Student {
  public:
    string name;
    int grade_counter;
    int* grades = nullptr;
    Student(string name, int grades[], int grade_counter);
    void add_grade(Student& Student, int grade);
    float get_average(Student& Student);
};

#endif /* STUDENTS_HEADER_H_ */
