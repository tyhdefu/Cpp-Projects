#include "pch.h"
#include "Teacher.h"
#include <iostream>

void Teacher::OutputIdentity()
{
	cout << "I am a teacher";
}

void Teacher::OutputAge()
{
	cout << "I am a teacher and I am " << this->age << " years old";
}

Teacher::Teacher()
{
}

Teacher::Teacher(string fName, string lName, int age, string phoneNumber)
	: Person(fName, lName, age, phoneNumber)
{
	
}

Teacher::~Teacher()
{
}
