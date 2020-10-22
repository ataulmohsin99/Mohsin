// This code has been contributed by ATA UL MOHSIN
// My Registration Number is BSEF19M031

#pragma once

#ifndef HEADER_H
#define HEADER_H

class PNG
{
	// PNG = Prime Number Generator
private:
	int next;
public:
	PNG()
	{ 
		// Default constructor
		next = 1;
	}
	void setZero();
	int getNextPrime();
	int Factors(int & n);
};

#endif