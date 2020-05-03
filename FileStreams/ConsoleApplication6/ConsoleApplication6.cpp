// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include "TempStats.h"

std::istream& operator >> (std::istream& is, TempStats & ts)
{
	is >> ts.min >> ts.max;
	return is;
}

std::ostream& operator << (std::ostream & os, const TempStats & ts)
{
	os << ts.min << "," << ts.max << std::endl;
	return os;
}

void displayallstats()
{
	std::fstream iofile("Tempstats.bin", std::ios_base::binary | std::ios_base::in | std::ios_base::out);
	if (iofile.is_open())
	{
		while (!iofile.eof())
		{
			TempStats ts;
			ts.read(iofile);

			if (iofile.gcount() == 0)
			{
				break;
			}

			std::cout << ts;
		}
	}
}

int main()
{
	
	std::ofstream ofile("Tempstats.bin", std::ios_base::binary| std::ios_base::out);
	if (ofile.is_open())
	{
		TempStats(-2.5, 7.5).write(ofile);
		TempStats(0, 9.9).write(ofile);
		TempStats(2.5, 11.0).write(ofile);
		TempStats(5.5, 14.5).write(ofile);
		TempStats(7.0, 17.7).write(ofile);
		TempStats(10.5, 23.7).write(ofile);
		TempStats(11.7, 29.5).write(ofile);
		TempStats(7.6, 22.9).write(ofile);
		TempStats(7.2, 21.5).write(ofile);
		TempStats(2.0, 16.0).write(ofile);
		TempStats(-4.7, 12.5).write(ofile);
		TempStats(-1.9, 8.5).write(ofile);
		ofile.close();
		std::cout << "finished writing" << std::endl;
	}
	else
	{
		std::cerr << "Couldn't open TempStats.bin for writing";
	}
	
	std::ifstream ifile("Tempstats.bin", std::ios_base::binary| std::ios_base::in);
	if (ifile.is_open())
	{
		while (!ifile.eof())
		{
			TempStats ts;
			ts.read(ifile);

			if (ifile.gcount() == 0)
			{
				break;
			}

			std::cout << ts;
		}
		std::cout << "finished reading" << std::endl;
	}
	else
	{
		std::cerr << "Couldn't open TempStats.bin for reading";
	}
	std::cout << "displayallstats method" << std::endl;
	displayallstats();
	std::cout << "change February to 1.5 and 5.9" << std::endl;
	std::fstream iofile("Tempstats.bin", std::ios_base::binary | std::ios_base::in| std::ios_base::out);
	TempStats(1.5, 5.9).write(iofile, 1);
	iofile.close();
	std::cout << "display all" << std::endl;
	displayallstats();
	return 0;
}