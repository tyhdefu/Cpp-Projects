#include "pch.h"
#include "stdio.h"
#include <iostream>
#include <string>
#include "Classes.h"

Student::Student()
{

}

Student::Student(string fName, string lName, string address, string city, int age, int phone)
{
	this->firstName = fName;
	this->lastName = lName;
	this->address = address;
	this->city = city;
	this->age = age;
	this->phoneNumber = phone;
}

void Student::SetFName(string fname)
{
	this->firstName = fname;
}

void Student::SetLName(string lname)
{
	this->lastName = lname;
}

void Student::SetAddress(string address)
{
	this->address = address;
}

void Student::SetCity(string city)
{
	this->city = city;
}

void Student::Setage(int age)
{
	this->age = age;
}

void Student::SetphoneNumber(int phone)
{
	this->phoneNumber = phone;
}

void Student::SitInClass()
{
	cout << "Sitting in the back of Class";
}

string Student::GetFName()
{
	return this->firstName;
}

string Student::GetLName()
{
	return this->lastName;
}

string Student::GetAddress()
{
	return this->address;
}

string Student::GetCity()
{
	return this->city;
}

int Student::GetAge()
{
	return this->age;
}

int Student::GetPhone()
{
	return this->phoneNumber;
}

Student::~Student()
{

}

Teacher::Teacher()
{

}

Teacher::Teacher(string fName, string lName, string address, string city, int age, int phone)
{
	this->firstName = fName;
	this->lastName = lName;
	this->address = address;
	this->city = city;
	this->age = age;
	this->phoneNumber = phone;
}

void Teacher::SetFName(string fname)
{
	this->firstName = fname;
}

void Teacher::SetLName(string lname)
{
	this->lastName = lname;
}

void Teacher::SetAddress(string address)
{
	this->address = address;
}

void Teacher::SetCity(string city)
{
	this->city = city;
}

void Teacher::Setage(int age)
{
	this->age = age;
}

void Teacher::SetphoneNumber(int phone)
{
	this->phoneNumber = phone;
}

string Teacher::GetFName()
{
	return this->firstName;
}

string Teacher::GetLName()
{
	return this->lastName;
}

string Teacher::GetAddress()
{
	return this->address;
}

string Teacher::GetCity()
{
	return this->city;
}

int Teacher::GetAge()
{
	return this->age;
}

int Teacher::GetPhone()
{
	return this->phoneNumber;
}

void Teacher::GradeStudent()
{
	cout << "Student has been graded" << endl;
}

void Teacher::SitInClass()
{
	cout << "Is sitting in the front of class";
}

Teacher::~Teacher()
{

}

Course::Course()
{

}

Course::Course(string name, Teacher teacher, Student Student1, Student Student2, Student Student3)
{
	this->name = name;
	this->teacher = teacher;
	this->Student1 = Student1;
	this->Student2 = Student2;
	this->Student3 = Student3;
}

void Course::SetName(string name)
{
	this->name = name;
}

void Course::SetTeacher(Teacher teacher)
{
	this->teacher = teacher;
}

void Course::SetStudents(Student Student1, Student Student2, Student Student3)
{
	this->Student1 = Student1;
	this->Student2 = Student2;
	this->Student3 = Student3;
}

string Course::GetName()
{
	return this->name;
}

Teacher Course::GetTeacher()
{
	return this->teacher;
}

Student Course::GetStudents()
{
	return this->Student1, Student2, Student3;
}

Course::~Course()
{

}

using namespace std;

int main()
{
	Student Student1 = Student("Tom", "Thumb", " 78 Real Road", "Trueland", 25, 7876549);
	Student Student2 = Student("Billy", "Jones", " 84 Long Road", "Kingston", 26, 2859490);
	Student Student3 = Student("Bobby", "Jones", " 57 Green Street", "Harland", 22, 9745345);
	
	Student Group1[3] = { Student1,Student2,Student3 };

	Teacher Teacher1 = Teacher("Yulia", "Clover", " 96 White Street", "Trent", 23, 8605384);
	

	Course Course1 = Course("Maths", Teacher1, Student1, Student2, Student3);

	cout << Course1.GetName() << endl;
	Teacher teacher = Course1.GetTeacher();
	teacher.GradeStudent();

	return 0;
}