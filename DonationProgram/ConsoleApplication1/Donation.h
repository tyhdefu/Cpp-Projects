#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

class Donation
{
public:
	string name;
	int amount;

	Donation();
	Donation(string name, int amount);

	static void write(string filename, Donation Dn);
	static void append(string filename, Donation Dn);

	static int GetTotal(string filename);

	static stringstream GetDonations(string filename);
	static string DonationListString(stringstream& ss);
	static Donation ReadDonation(stringstream &ss, int index);

	~Donation();
};

inline istream& operator>>(istream & is, Donation & Dn)
{
	string stramt;

	is >> Dn.name >> stramt;

	if (!stramt.empty())
	{

		Dn.amount = stoi(stramt);
	}
	else
	{
		cout << "file empty";
		Dn.amount = 0;
	}

	return is;
}

inline ostream& operator<< (ostream & os, Donation & Dn)
{
	os << Dn.name << " " << Dn.amount;
	return os;
}