/*

This is a Corporate Data Sales Program

The program will ask user to enter in Sales per Division

- calcuate the total of sales per division

- calculate the average of sales per division.

Finally the program will display the Total Sales per division and Average Sales per division.


----------------------------------------------------
Author: Tam T. Tran
Created: November 20, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

// stucture function

struct Division												// changed from Corp Data to Division
{
	string name;											// divisions name.... changed from Division to name

	double annualSales;										// annual sales, now holds the total
	double avg;												// average of quarter sales
	double firstqtr, secondqtr, thirdqtr, fourthqtr;		// quater sales for first, second, third and fourth.
	//double total											// do not need this anymore
};


// Function prototypes

void GetDivisionSales(Division& north, Division& south, Division& east, Division& west);
void FindTotalandAvgSales(Division& north, Division& south, Division& east, Division& west);
void DisplayCorpInfo(const Division& north, const Division& south, const Division& east, const Division& west);

int main()

{
	Division north, south, east, west, div;					// added to declare north, south, east, west and div

	// Intro

	cout << "Corporate Data Sales Program" << endl;
	cout << "=============================\n" << endl;

	GetDivisionSales(north,south,east,west);
	FindTotalandAvgSales(north,south, east, west);
	DisplayCorpInfo(north, south, east, west);

	return 0;

}

// Function to get the Division sales
void GetDivisionSales(Division& north, Division& south, Division& east, Division& west)
{

	// North Division

			cout << "\nEnter the quarterly sales for the North Division:" << endl;

			cout << "\t First quarter: ";
			cin >> north.firstqtr;

			cout << "\t Second quarter: ";
			cin >> north.secondqtr;

			cout << "\t Third quarter: ";
			cin >> north.thirdqtr;

			cout << "\t Fourth quarter: ";
			cin >> north.fourthqtr;

			// Validation

			if (north.firstqtr < 0 || north.secondqtr < 0 || north.thirdqtr < 0 || north.fourthqtr < 0)
			{
				cout << "You have entered in the a wrong number, please try something greater than 0" << endl;
				cin >> north.firstqtr;
				cin >> north.secondqtr;
				cin >> north.thirdqtr;
				cin >> north.fourthqtr;
			}

	// South Division

			cout << "\nEnter the quarterly sales for the South Division:" << endl;
			cout << "\t First quarter: ";
			cin >> south.firstqtr;

			cout << "\t Second quarter: ";
			cin >> south.secondqtr;

			cout << "\t Third quarter: ";
			cin >> south.thirdqtr;

			cout << "\t Fourth quarter: ";
			cin >> south.fourthqtr;

			// Validation

			if (north.firstqtr < 0 || north.secondqtr < 0 || north.thirdqtr < 0 || north.fourthqtr < 0)
			{
				cout << "You have entered in the a wrong number, please try something greater than 0" << endl;
				cin >> south.firstqtr;
				cin >> south.secondqtr;
				cin >> south.thirdqtr;
				cin >> south.fourthqtr;
			}

	// East Division

			cout << "\nEnter the quarterly sales for the East Division:" << endl;
			cout << "\t First quarter: ";
			cin >> east.firstqtr;

			cout << "\t Second quarter: ";
			cin >> east.secondqtr;

			cout << "\t Third quarter: ";
			cin >> east.thirdqtr;

			cout << "\t Fourth quarter: ";
			cin >> east.fourthqtr;

			// Validation

			if (east.firstqtr < 0 || east.secondqtr < 0 || east.thirdqtr < 0 || east.fourthqtr < 0)
			{
				cout << "You have entered in the a wrong number, please try something greater than 0" << endl;
				cin >> east.firstqtr;
				cin >> east.secondqtr;
				cin >> east.thirdqtr;
				cin >> east.fourthqtr;
			}

	// West Division

			cout << "\nEnter the quarterly sales for the West Division:" << endl;
			cout << "\t First quarter: ";
			cin >> west.firstqtr;

			cout << "\t Second quarter: ";
			cin >> west.secondqtr;

			cout << "\t Third quarter: ";
			cin >> west.thirdqtr;

			cout << "\t Fourth quarter: ";
			cin >> west.fourthqtr;

			// Validation

			if (west.firstqtr < 0 || west.secondqtr < 0 || west.thirdqtr < 0 || west.fourthqtr < 0)
			{
				cout << "You have entered in the a wrong number, please try something greater than 0" << endl;
				cin >> west.firstqtr;
				cin >> west.secondqtr;
				cin >> west.thirdqtr;
				cin >> west.fourthqtr;
			}
					

}

// Function to find Total and Average sales

void FindTotalandAvgSales(Division& north, Division& south, Division& east, Division& west)

{


	// Calculates Totals

	north.annualSales = (north.firstqtr + north.secondqtr + north.thirdqtr + north.fourthqtr);
	south.annualSales = (south.firstqtr + south.secondqtr + south.thirdqtr + south.fourthqtr);
	east.annualSales = (east.firstqtr + east.secondqtr + east.thirdqtr + east.fourthqtr);
	west.annualSales = (west.firstqtr + west.secondqtr + west.thirdqtr + west.fourthqtr);

	// Calculates Average 
	north.avg = (north.annualSales / 4);
	south.avg = (south.annualSales / 4);
	east.avg = (east.annualSales / 4);
	west.avg = (west.annualSales / 4);


}

void DisplayCorpInfo(const Division& north, const Division& south, const  Division& east, const Division& west)

{

	// Display total sales

	cout << "\nTotal Annual Sales:" << endl;
	cout << "\t North Division: " << north.annualSales << endl;
	cout << "\t South Division: " << south.annualSales << endl;
	cout << "\t East Division: " << east.annualSales << endl;
	cout << "\t West Division: " << west.annualSales << endl;

	// Displays Average Sales

	cout << "\n Average Quarter Sales:" << endl;
	cout << "\t North Division: " << north.avg << endl;
	cout << "\t South Division: " << south.avg << endl;
	cout << "\t East Division: " << east.avg << endl;
	cout << "\t West Division: " << west.avg << endl;

}

