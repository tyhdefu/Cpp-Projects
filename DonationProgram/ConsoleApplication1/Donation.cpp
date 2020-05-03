#include "pch.h"
#include "Donation.h"

//Constructors/Destructors
Donation::Donation()
{
}

Donation::Donation(string name, int amount)
{
	this->name = name;
	this->amount = amount;
}

Donation::~Donation()
{
}

//Functions

void Donation::write(string filename, Donation Dn)
{	
	ofstream ofile;
	ofile.open(filename, ios_base::out);
	if (ofile.is_open())
	{
		ofile << Dn;
		ofile.close();
	}
	else
	{
		cerr << "couldn't open" << filename;
	}
}

void Donation::append(string filename, Donation Dn)
{
	ofstream ofile;
	ofile.open(filename, ios_base::out| ios_base::app);
	if (ofile.is_open())
	{
		ofile << endl << Dn;
		ofile.close();
	}
	else
	{
		cerr << "couldn't open" << filename;
	}
}

int Donation::GetTotal(string filename)
{
	Donation Dn;
	int total;

	ifstream ifile;
	ifile.open(filename, ios_base::in);
	if (ifile.is_open())
	{
		string lastline;
		ifile >> Dn;

		if (!Dn.name.empty())
		{
			total = Dn.amount;
			//read to get total
			while (!ifile.eof())
			{
				ifile >> Dn;
				total = total + Dn.amount;
			}
		}
		else
		{
			//first time do nothing
			total = 0;
			cout << "file empty" << endl;
		}
		ifile.close();
	}
	else
	{
		cerr << "Could not open" << filename;
	}
	return total;
}

stringstream Donation::GetDonations(string filename)
{
	stringstream strstream;

	ifstream ifile;
	ifile.open(filename, ios_base::in);
	if (ifile.is_open())
	{
		string lastline;
		Donation Dn;

		ifile >> Dn;

		if (!Dn.name.empty())
		{
			strstream <<  Dn;
			
			//read to get total
			while (!ifile.eof())
			{
				ifile >> Dn;
				strstream << endl << Dn;
			}
		}
		else
		{
			//first time do nothing
			cout << "file empty" << endl;
		}
		ifile.close();
	}
	else
	{
		cerr << "Could not open" << filename;
	}
	return strstream;
}

string Donation::DonationListString(stringstream& ss)
{
	//int index;
	Donation Dn;
	ss >> Dn;
	string temp = Dn.name + " " + to_string(Dn.amount) + "\n";
	string finalstring = temp;

	if (!Dn.name.empty())
	{	
		while (!ss.eof())
		{
			ss >> Dn;
			temp = Dn.name + " " + to_string(Dn.amount) + "\n";
			finalstring += temp;
		}
	}
	else
	{
		cout << "stringstream is empty" << endl;
	}
	ss.seekg(0);
	return finalstring;
}

Donation Donation::ReadDonation(stringstream &ss, int index)
{
	Donation Dn;
	int i = 0;

	while (i <= index)
	{
		if (!ss.eof())
		{
			ss >> Dn;
			i++;
		}
		else
		{
			cerr << "Index" << index << " " << "higher than entries";
		}
	}
	return Dn;
}