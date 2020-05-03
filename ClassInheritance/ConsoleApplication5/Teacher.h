#pragma once
#include "Person.h"

class Person;

class Teacher : public Person
{
public:
	virtual void OutputIdentity();
	virtual void OutputAge();

	Teacher();
	Teacher(string fName, string lName, int age, string phoneNumber);
	virtual ~Teacher();
};