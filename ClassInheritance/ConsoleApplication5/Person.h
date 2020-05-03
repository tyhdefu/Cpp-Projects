#pragma once

#include <string>

using namespace std;

class Person
{
protected:
	string firstname;
	string lastname;
	int age;
	string phoneNumber;
public:
	virtual void OutputIdentity() = 0;
	virtual void OutputAge();

	Person();
	Person(string fname, string lname, int age, string phoneNumber);
	~Person();
};