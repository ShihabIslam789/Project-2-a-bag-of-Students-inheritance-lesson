//
/** @file  Person.cpp */
//  Project1
//  Description: A simple class to illustrate basic OOP and inheritance concept
//               Person is a base class for people enrolled in a course
//
//  originally  Created by Tiziana Ligorio on 1/14/19.
//  Modified on 5/27/20 - add default constructor, mutator functions and operator==

#include "Person.hpp"
#include <string>

Person::Person() {
	id_ = 0;
	first_name_ = "";
	last_name_ = "";
}


//@param id unique id of person
//@param first firstname of person	
//@param last lastname of person object 
// param constructor
Person::Person(int id, std::string first, std::string last) {
	id_ = id;
	first_name_ = first;
	last_name_ = last;
}

//accessor function: returns ID
//returns the value of ID
int Person::getID() const {
	return id_;
}

//accessor function: returns first name
//returns firstname of person object
std::string Person::getFirstName() const {
	return first_name_;
}


//accessor function: returns last name
//returns lastname of person object
std::string Person::getLastName() const {
	return last_name_;
}
// @return: a string for testing derived class inheritance
std::string Person::inheritanceTest() const
{
	return "passed inheritance test!";
}


bool Person::operator==(Person  p2) const {
	return (getFirstName() == p2.getFirstName()) && (getLastName() == p2.getLastName()) && (getID() == p2.getID());
}
