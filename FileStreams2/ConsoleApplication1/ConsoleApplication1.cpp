// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    cout << "Enter Donation (name amount)" << endl;
	string response;
	stringstream str;
	string name;
	string amt;
	int amount;
	
	getline(cin,response);
	str << response;
	str >> name >> amt;
	amount = stoi(amt);
	
	ifstream ifile;
	ifile.open("Donation.txt", ios_base::in);
	if (ifile.is_open())
	{
		string lastread;

		while (!ifile.eof())
		{
			//cout << "about to read" << endl;
			getline(ifile, lastread);
			//cout << "read" << lastread << endl;
		}

		cout << lastread << std::endl;
		
		ifile.close();

		ofstream ofile;
		ofile.open("Donation.txt", ios_base::out | ios_base::app);

		if (ofile.is_open())
		{
			int lasttotal = stoi(lastread);
			int total = lasttotal + amount;

			ofile << endl;
			ofile << total;


			//cout << endl << total;
			ofile.close();
		}
		else
		{
			cerr << "Couldn't open Donation.txt";
		}
	}
	else
	{
		cerr << "Couldn't open Donation.txt";
	}
}