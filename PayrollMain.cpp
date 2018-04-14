/*

This is a payroll program using classes and objects.


----------------------------------------------------
Author: Tam T. Tran
Created: December 12, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include "Payroll.h"

using namespace std;

// Function to display the total pay

void displaypayroll(Payroll *const);

int main()
{
	const int EMPLOYEE = 7;						// sets the employees at 7

	// Variables

	double pay = 20.00;							// payrate
	double hoursworked;							// hours 
	double totpay;								// total pay
	int count;									// count

	totpay = pay * hoursworked;					// calculates the total pay


	Payroll payday[EMPLOYEE];					// Array for the 7 employees


	cout << "Welcome to my Payroll Program" << endl;
	cout << "==============================\n" << endl;

	// get the workers hours 

	for (count = 0; count < EMPLOYEE; count++)

	{
		cout << "Please enter in the number of hours worked (0-60): ";
		cin >> hoursworked;


		if (hoursworked < 0)					// validation for negative hours
		{
			cout << "Negative amount of hours is not allowed, please enter in a positive number of hours worked" << endl;
			cin >> hoursworked;
		}

		if (hoursworked > 60)					// validation for hours more than 60.
		{
			cout << "You have entered a number greater than 60, please enter a number below 60" << endl;
			cin >> hoursworked;
		}

		payday[count].setRate(pay);
		payday[count].setHours(hoursworked);
		payday[count].setTotalPay(totpay);

	}

	for (int count = 0; count < EMPLOYEE; count++)
	{
		displaypayroll(&payday[count]);
	}

	return 0;
}


// Function to display the total pay

void displaypayroll(Payroll * const n)
{

	cout << "The Gross pay is: " << n->getTotalPay() << endl;
}