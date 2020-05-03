#pragma once
#include "Person.h"

class Person;

class Student : public Person
{
public:
	virtual void OutputIdentity();
	virtual void OutputAge();

	Student();
	Student(string fName, string lName, int age, string phoneNumber);
	virtual ~Student();
};