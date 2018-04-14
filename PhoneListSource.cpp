/*

This is a Phone Number list program.

User will enter in a name or a number and the program will search for the name that corresponds with user's input.

The program will have an array that holds the contacts names and their numbers
	
	will have a search array to hold the user's input



Ask user for input
	store user's input as a search array

Search the names array for user's input

Output the search results.



----------------------------------------------------
Author: Tam T. Tran
Created: November 15, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	bool found = false;								// holds found in bool

	const int NUM = 22;								// holds the 11 contacts
	const int length = 100;							// max chaaracters per line
	char search[length];							// search array to hold user's input
	char *contact = NULL;							// pointer to the search query
	int index;										// counter

	// Array that will hold the contacts with their numbers.

	char names[NUM][length] = { "Renne Javens, 678-1223",
								"renne javens, 678-1223",
								"Joe Looney, 586-0097",
								"joe looney, 586-0097",
								"Geri Palmer, 223-8787",
								"geri palmer, 223-8787",
								"Lynn Presnell, 887-1212",
								"lynn presnell, 887-1212",
								"Bill Wolfe, 223-8878",
								"bill wolfe, 223-8878",
								"Sam Wiggins, 486-0998",
								"sam wiggins, 486-0998",
								"Bob Kain, 586-8712",
								"bob kain, 586-8712",
								"Tim Haynes, 586-7676",
								"tim haynes, 586-7676",
								"John Johnson, 223-9037",
								"john johnson, 223-9037",
								"Jean James, 678 4939",
								"jean james, 678-4939",
								"Ron Palmer, 486-2783",
								"ron palmer, 486-2783"};

	// Intro
	cout << "Welcome to the phone number list program" << endl;
	cout << "=========================================\n" << endl;

	// Get the user's input 
	cout << "To search for your contact's number" << endl;
	cout << "Please enter in a name or partial name of the person below.\n" << endl;

	cin.getline(search, length);						// input from user
	cout << endl;

	// this will search the array for user's input and output the results

	for (index = 0; index < NUM; index++)
	{
		contact = strstr(names[index], search);
		{
			if (contact != NULL)

				cout << names[index] << "\n" << endl;			// should print out name and number that user was searching for.
			found = true;
		}
	}

	if (!found)
		cout << "Sorry no matches were found at this time." << endl;

	return 0;
}

