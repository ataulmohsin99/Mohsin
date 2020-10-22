// This code has been contributed by ATA UL MOHSIN
// My Registration Number is BSEF19M031

#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	PNG obj;
	int input = 0; // for calling a specific function like reset/next/exit etc
	int abc = 0; // result display
	do
	{
		cout << endl << "Enter 1 to reset" << endl;
		cout << "Enter 2 for next prime number" << endl;
		cout << "Enter -1 to quit : ";
		cin >> input;
		switch (input)
		{
		case 1:
			{		
				obj.setZero();
				break;
			}
		case 2:
			{
				abc = obj.getNextPrime();
				cout << endl << "Counter: " << abc << endl;
				break;
			}
		case -1:
			break;
		default:
			{
				cout << endl << "Wrong Input!" << endl;
			}
		}
	} 
	while (input != -1);
	cout << endl << "Thanks for using this Program." << endl;
	return 0;
}