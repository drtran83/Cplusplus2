/*

This program is a password verifier

The program will ask user to enter in a password that is 6 characters or more.
	- will validate and ask user to try again if there is less than 6.

The program will use a function to check the password for an uppercase, lowercase, and a digit
	- will ask user to try again if it is missing either uppercase, lowercase, or a digit.

If all is well, program will let user know that their password is a valid one.

----------------------------------------------------------------------------------------------

Ask user to enter in a password that is atleast 6 characters or more.
	save password as pw.

Have the function go through the password to check to see if it meets the criteria of uppercase, lowercase, and digit.







----------------------------------------------------
Author: Tam T. Tran
Created: November 13, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Function prototypes

bool validatepw(char pw[]);

int main()

{
	const int SIZE = 100;						// stores size
	char pw[SIZE];							// stores password + size


	cout << "Welcome to the password verifier program\n" << endl;
	cout << "Your password should be at least be 6 characters long," << endl;
	cout << "has at least one upper and lower case letter," << endl;
	cout << "and also has at least one digit. \n" << endl;

	cin >> pw;

	// ensures length is right.

	if (strlen(pw) < 6)
	{
		cout << "I'm sorry your password is not long enough, please try again.\n";
			cin >> pw;
	}

	if (validatepw(pw))
	{
		cout << "The password you entered is valid" << endl;
	}


	return 0;
}

// This function should validate the password

bool validatepw(char pw[])
{

	bool upper = false;
	bool lower = false;
	bool digit = false;
	int length = strlen(pw);

	for (int i = 0; i < length; i++)
	{
		if (isdigit(pw[i]))
			digit = true;

		if (islower(pw[i]))
			lower = true;

		if (isupper(pw[i]))
			upper = true;
	}

	if (digit == false)
	{
		cout << "Your password does not contain a digit, try again." << endl;
		cin >> pw;
	}

	if (lower == false)
	{
		cout << "Your password does not contain a lowercase character, try again." << endl;
		cin >> pw;
	}

	if (upper == false)
	{
		cout << "Your password does not contain a uppercase character, try again." << endl;
		cin >> pw;
	}

	return true;
	
}
