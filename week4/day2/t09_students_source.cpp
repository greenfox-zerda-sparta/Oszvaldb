/*
 * students_source.cpp
 *
 *  Created on: Nov 8, 2016
 *      Author: zoltanszabo
 */

#include <iostream>
#include <string>

#include "t09_students_header.h"
using namespace std;

Student::Student(string name, int grades[], int grade_counter) {
	this->name = name;
	this->grade_counter = grade_counter;
	this->grades[grade_counter] = grades[grade_counter];
};

void add_grade(Student& Student, int grade) {
  int* temp = new int[Student.grade_counter];
  for (int i = 0; i < Student.grade_counter; i++) {
	  temp[i] = Student.grades[i];
  }
  temp[Student.grade_counter] = grade;
  Student.grade_counter += 1;
  delete[] Student.grades;
  Student.grades = temp;
}

float get_average(Student& Student) {
  int add = 0;
  for (int i = 0; i < Student.grade_counter; i++) {
    add += Student.grades[i];
  }
  return add / Student.grade_counter;
}


