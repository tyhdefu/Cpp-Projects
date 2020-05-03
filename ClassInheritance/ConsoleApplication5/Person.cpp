#include "pch.h"
#include "Person.h"
#include <iostream>
using namespace std;

void Person::OutputAge()
{
	cout << "I am " + to_string(age) + " years old";
}

Person::Person()
{
}

Person::Person(string fname, string lname, int age, string phoneNumber)
{
	this->firstname = fname;
	this->lastname = lname;
	this->age = age;
	this->phoneNumber = phoneNumber;
}

Person::~Person()
{
}
