// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Donation.h"
#include <fstream>

using namespace std;

string printall(stringstream& ss)
{
	int x = 0;
	string str;
	ss.seekg(0);
	while (x < 10)
	{
		ss >> str;
		x++;
	}
	return str;
}

int main()
{
	string file = "Donations.txt";

	Donation Dn;

	Donation donation("billy", 250);

	Donation::write(file, donation);

	stringstream ss = Donation::GetDonations(file);
	Dn = Donation::ReadDonation(ss, 0);
	cout << Dn;
}