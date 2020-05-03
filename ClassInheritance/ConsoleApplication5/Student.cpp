#include "pch.h"
#include "Student.h"
#include <iostream>

void Student::OutputIdentity()
{
	cout << "I am a student";
}

void Student::OutputAge()
{
	cout << "I am a student and I am " << this->age << "years old";
}

Student::Student()
{
}

Student::Student(string fName, string lName, int age, string phoneNumber)
	: Person(fName, lName, age, phoneNumber)
{

}

Student::~Student()
{
}
