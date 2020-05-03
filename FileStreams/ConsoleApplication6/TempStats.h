#pragma once
#include <iostream>
#include <fstream>
#include <string>

class TempStats
{
public:
	double min, max;
	static const size_t RECORD_SIZE = 2 * sizeof(double);
	TempStats()
	{
		this->min = 0.0;
		this->max = 0.0;
	}
	TempStats(double min, double max)
	{
		this->min = min;
		this->max = max;
	}

	void write(std::ostream & os)
	{
		os.write((char*)&min, sizeof(double));
		os.write((char*)&max, sizeof(double));
	}

	void write(std::ostream & os, int index)
	{
		std::streampos pos(index * RECORD_SIZE);
		os.seekp(pos);
		os.write((char*)&min, sizeof(double));
		os.write((char*)&max, sizeof(double));
	}

	void read(std::istream & is)
	{
		is.read((char*)&min, sizeof(double));
		is.read((char*)&max, sizeof(double));
	}

	void read(std::istream & is, int index)
	{
		std::streampos pos(index * RECORD_SIZE);
		is.seekg(pos);
		is.read((char*)&min, sizeof(double));
		is.read((char*)&max, sizeof(double));
	}

	~TempStats()
	{

	}
};