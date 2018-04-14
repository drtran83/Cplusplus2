/*
This is a cash register program


----------------------------------------------------
Author: Tam T. Tran
Created: December 12, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------


*/

#include <iostream>
#include <iomanip>
#include "CashRegister.h"
#include "InventoryItem.h"

using namespace std;

int main()
{
	const int ITEMS = 5;					// set number of items to 5

	// variables

	char repeat;								// repeat the table
	double item;								// variable for user entered item
	double newcost;								// sets the cost
	int newunits = 0;							// sets the units


	InventoryItem inventory[ITEMS] = {

		InventoryItem("Adjustable Wrench", 7.00, 10),
		InventoryItem("Screwdriver", 4.00, 20),
		InventoryItem("Pliers", 3.75, 35),
		InventoryItem("Ratchet", 8.00, 10),
		InventoryItem("Socket Wrench", 2.50, 7), };

	cout << "Welcome to Tom's Hardware!" << endl;
	cout << "==============================\n\n" << endl;

	cout << "Below is our current inventory" << endl;

	do
	{

		// menu for current inventory
		cout << "--------------------------------------------------------" << endl;
		cout  << "#" << setw(11) << "Item" << setw(35) << "Qty on hand\n";
		cout << "--------------------------------------------------------\n";

		for (int i = 0; i < ITEMS; i++)
		{
			cout << i;
			cout << setw(25) << inventory[i].getDescription();
			cout << setw(12) << inventory[i].getSale(newunits) << endl;
		}

		cout << "\n";

		// Ask user.

		cout << "Which item above is being purchased? (between 0 and 4) ";
		cin >> item;

		// Validation for item picked

		if (item < 0 || item > 4)

		{
			cout << "Please enter a number between 0 and 4: ";
		}

		if (item == 0)
		{
			newcost = inventory[0].getCost();
		}

		else if (item == 1)
		{
			newcost = inventory[1].getCost();
		}

		else if (item == 2)
		{
			newcost = inventory[2].getCost();
		}

		else if (item == 3)
		{
			newcost = inventory[3].getCost();
		}

		else if (item == 4)
		{
			newcost = inventory[4].getCost();
		}


		cout << "How many units? ";
		cin >> newunits;

		// validation for units bought

		if (newunits < 1)
		{
			cout << "Please enter in a positive number of units";
		}

		double newtaxes = .06*(1.3*newcost);										// calculate taxes

		CashRegister Register((1.3*newcost*newunits), 1.06*(1.3*newcost*newunits), newtaxes);

		cout << "Subtotal:" << setw(3) << "$"<< Register.getSubtotal() << endl;
		cout << "Sales Tax:" << setw(2)<< "$" << Register.getTax() << endl;
		cout << "Total:" << setw(6) << "$" << Register.getTotal() << endl;

		cout << "Would you like to buy another item? (y or n) " << endl;
		cin >> repeat;

	} while (repeat == 'Y' || repeat == 'y');
}