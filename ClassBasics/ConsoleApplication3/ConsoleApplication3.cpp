// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	string name;
	int age;
	double height;
	int weight;
};

void PassByValue(int num)
{
	cout << "In PassByValue()" << endl;
	num++;
	cout << num << endl;
	return;
}

void PassByRef(int *num)
{
	cout << "In PassByRef()" << endl;
	*num = 50;
	cout << *num << endl;
	return;
}

void ModifyPerson(Person& person)
{
	person.name = "Bob";
	cout << person.name << endl;
	return;
}



int main()
{
	int num1;
	int* pNum = new int;
	num1 = 3;
	*pNum = 5;
	PassByValue(num1);
	cout << "In main()" << endl;
	cout << num1 << endl;
	PassByRef(pNum);
	cout << "In main()";
	cout << *pNum << endl;
	// next section
	double* pDouble = new double;
	*pDouble = 5.9;
	cout << *pDouble << endl;
	delete pDouble;
	//cout << *pDouble << endl;
	Person newPerson;
	newPerson.name = "Billy";
	newPerson.height = 173;
	newPerson.weight = 57;
	newPerson.age = 32;
	ModifyPerson(newPerson);
	cout << newPerson.name << endl;
}