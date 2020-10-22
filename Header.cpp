// This code has been contributed by ATA UL MOHSIN
// My Registration Number is BSEF19M031

#include "Header.h"
#include <iostream>
using namespace std;

void PNG::setZero()
{
	next = 1;
}

int PNG::getNextPrime()
{
	int check = 0;
	while (!check)
	{
		next++;
		if (Factors(next))
			check = 1;
	}
	return next;
}

int PNG::Factors(int & n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			// factors checking
			return 0;
	}
	return 1;
}