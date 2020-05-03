#pragma once
#include <string>

using namespace std;

class Student
{
private:
	string firstName;
	string lastName;
	string address;
	string city;
	int age;
	int phoneNumber;
public:
	Student();
	Student(string fName, string lName, string address, string city, int age, int phone);
	
	void SetFName(string fname);
	void SetLName(string lname);
	void SetAddress(string address);
	void SetCity(string city);
	void Setage(int age);
	void SetphoneNumber(int phone);

	string GetFName();
	string GetLName();
	string GetAddress();
	string GetCity();
	int GetAge();
	int GetPhone();

	void SitInClass();

	~Student();
};

class Teacher
{
private:
	string firstName;
	string lastName;
	string address;
	string city;
	int age;
	int phoneNumber;
public:
	Teacher();
	Teacher(string fName, string lName, string address, string city, int age, int phone);

	void SetFName(string fname);
	void SetLName(string lname);
	void SetAddress(string address);
	void SetCity(string city);
	void Setage(int age);
	void SetphoneNumber(int phone);
	
	string GetFName();
	string GetLName();
	string GetAddress();
	string GetCity();
	int GetAge();
	int GetPhone();

	void GradeStudent();
	void SitInClass();

	~Teacher();
};

class Course
{
private:
	string name;
	Student Student1;
	Student Student2;
	Student Student3;
	Teacher teacher;
public:
	Course();
	Course(string name, Teacher teacher, Student Student1, Student Student2, Student Student3);

	void SetName(string name);
	void SetTeacher(Teacher teacher);
	void SetStudents(Student student1, Student Student2, Student Student3);

	string GetName();
	Student GetStudents();
	Teacher GetTeacher();
	
	~Course();
};