/*

This program will use a binary and linear search to see if the users numbers entered are the lucky winners
for this week.

Psuedocode:

Get numbers from user
	save numbers

Set and initialize array with the 10 numbers
	The numbers are: 13579, 62483, 26791, 77777, 26792, 79492, 33445, 85647, 55555, and 93121


Do linear search through array to see if the numbers are a winner

Do binary search through array to see if the numbers are a winner.

Congratulate the user if their numbers are winners this week.

If no winning number
	Let user know that their numbers did not win this week.  Good luck next time.



----------------------------------------------------
Author: Tam T. Tran
Created: October 29, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/



#include <iostream>
#include <string>

using namespace std;



const int SIZE = 10;					// Constant int for the lucky numbers

// Function prototypes

int linearSearch(int[], const int SIZE, int useNum);					// linear search for winning number
int binarySearch(int[], const int SIZE, int useNum);					// binary search for winning number

int main()
{
	int useNum;																	// number that user enters

	int luckyNum[SIZE] = { 13579, 62483, 26791, 77777, 26792,
							79492, 33445, 85647, 55555, 93121 };				// Array for lucky numbers


	cout << "Welcome to this weeks Lottery Drawing!!\n";						// Welcome message
	cout << "============================================\n" << endl;


	cout << "Please enter your 5-digit lottery number: ";		// Prompts user to enter in number
	cin >> useNum;

	cout << "\nLinear Search Results for your lottery number: " << endl;

	// calling linear search

	if (linearSearch(luckyNum, SIZE, useNum))
	{
		cout << "\nThe numbers you entered is a winner!  Congratulations!!!!\n";
	}
	else
	{
		cout << "\nThe numbers you entered are not winners :(.  Good luck next time!!\n";
	}

	// calling binary search

	cout << "\nBinary search Results for your lottery number: " << endl;

	if (binarySearch(luckyNum, SIZE, useNum))
	{
		cout << "\nThe numbers you entered is a winner!  Congratulations!!!!!\n";

	}
	else
	{
		cout << "\nThe numbers you entered are not winners :(.  Good luck next time!!\n";
	}

	return 0;
}

// Linear search function will search the integer array.

int linearSearch(int luckyNum[], const int SIZE, int useNum)
{
	int count = 0;
	bool found = false;

	while (!found && count < SIZE)
	{
		if (luckyNum[count] == useNum)

			found = true;
		count++;

	}

	return found;
}

// Binary search function will also search the integer array

int binarySearch(int luckyNum[], int SIZE, int value)
{
	int first = 0;						// First array element
	int last = SIZE - 1;				// Last array element
	int middle;							// Midpoint of search
	int position = -1;					// Position of search value
	bool found = false;

	while (!found && first <= last)
	{
		middle = (first + last) / 2;	 // calcs the midpoint
		if (luckyNum[middle] == value)	// if value is found at midpoint
		{
			found = true;
			position = middle;
		}
		else if (luckyNum[middle] > value)  // if the value ends up in lower half
			found = true;
		last = middle - 1;

		if (luckyNum[middle] < value)
			first = middle + 1;				// if value ends up in upper half
	}

	return position;

}
