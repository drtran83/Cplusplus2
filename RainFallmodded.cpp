/*

This program will display and calculate inputted rainfall values.

*modification*

The program will now sort and display the months and their rainfall amounts

First program will ask user to enter in values for each month

	store the values

Have a function to find the total
	store the total
	have it called back in main
	display the total for the user

Have a function to find the average
	store it in avg
	have it called back in main
	display the avg for user

Have a function find the lowest month and value
	store it in low
	have it called back in main
	display lowest

Have a function to find the highest month and value
	store it in high
	have it called back in main
	display highest

Sort the months 
	display from highest to lowest

----------------------------------------------------
Author: Tam T. Tran
Created: October 30, 2015
Rev: 2
Class: CISS 242 - Professor James Viviano
----------------------------------------------------


*/


#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Function Prototypes

double getTotal(double[], int);  
double getAverage(double[],int);
double getLowest(double[], int, int&);
double getHighest(double[], int, int&);
//void sortArray(int indicies[], double rainFall[], string months[], int AMT);
void showOrder(double rainFall[], string months[], const int AMT, int index);
void dualSort(double rainFall[], string months[], const int AMT);

int main()
{
	// Variables

	const int AMT = 12;																						// Number of Months

	string months[AMT] = { "January", "Feburary", "March", "April", "May", "June", "July",					// Names of Months
									"August", "September", "October", "November", "December" };

	double rainFall[AMT];																					// rainfall in AMT
	double total, average;
	int highest, lowest;																					// Stores the highest, lowest, average, and total
	string highMonth;																						// String for High Month
	string lowMonth;																						// String for Low Month
	int index = 0;
	

	// Welcome

	cout << "Welcome to the modified rainfall statistics program" << endl;
	cout << "===================================================" << endl;


	// Get rain fall from user
	int count;
	for (count = 0; count < AMT; count++)
	{
		cout << "\nHow many inches of rain did " << months[count] << " get?" << endl;
		cin >> rainFall[count];

		while (rainFall[count] < 0)
		{
			cout << "You entered a number that is below 0, please enter a number that is above 0." << endl;
			cin >> rainFall[count];
		}
	}

	// Gets and Displays Total
	total = getTotal(rainFall, AMT);
	cout << "\nThe Total rainfall for the whole year is: " << total << endl;

	cout << fixed << showpoint << setprecision(2) << endl;

	// Gets and Displays Average
	average = getAverage(rainFall, AMT);
	cout << "The Average rainfall for the whole year is: " << average << endl;

	// Gets and Displays Lowest

	lowMonth = rainFall[0];

	for (count = 0; count > AMT; count++)
	{
		lowMonth = months[count];
	}
	
	lowest = getLowest(rainFall, AMT, count);
	cout << "\nThe Lowest rainfall for the whole year is: " << lowest << endl;
	cout << "The month with the lowest amount of rainfall is: " << months[count] << endl;

	// Gets and Displays Highest

	highMonth = rainFall[0];

	for (count = 1; count < AMT; count++)
	{
			highMonth = months[count];
	}
	

	highest = getHighest(rainFall, AMT, count);		// calls the function getHighest

	cout << "\nThe Highest rainfall for the whole year is: " << highest << endl; 
	cout << "The month with the highest amount of rainfall is: " << months[count] << endl;



	dualSort(rainFall, months, AMT);				// calls the dualSort

	showOrder(rainFall, months, AMT, index);		// shows the months and rainfall

	


/*
	int indicies[AMT];

	for (int month = 0; month < AMT; month++)
	{
		indicies[AMT] = month;
	}

	sortArray(indicies, rainFall, months, AMT);
*/

	return 0;

}

// This function calculates the total

double getTotal(double rainFall[], int AMT)
	{
		double total = 0;

		for (int count = 0; count < AMT; count++)

			total += rainFall[count];

		return total;

	}

// This Function gets the average.

double getAverage(double rainFall[], int AMT)
{
	double average = 0;
	double total;

	total = getTotal(rainFall, AMT);

	average = total / AMT;
	
	return average;

}

// This Function gets the highest

double getHighest(double rainFall[], int AMT, int &index)
{

	double highest;
	highest = rainFall[0];
	
	for (int count = 0; count < AMT; count++) //start with 0
	{
		if (rainFall[count] > highest)
		{
			highest = rainFall[count];
			index = count;
		}
	}
	return highest;

}

// This Function gets the lowest

double getLowest(double rainFall[], int AMT, int &index)
{
	double lowest;

	lowest = rainFall[0];

	for (int count = 0; count < AMT; count++) //start with 0
	{
		if (rainFall[count] < lowest)
		{
			lowest = rainFall[count];
			index = count;
		}

	}
	return lowest;
}


// Function to show the order

void showOrder(double rainFall[], string months[], const int AMT, int index)

{
	cout << "\nMonth \t\t Rainfall amount\n";
	cout << "-------------------------------";

	for (int index = 0; index < AMT; index++)
	{
		cout << "\n" << months[index]<< "\t";
		cout << rainFall[index] << endl;
	}
	cout << endl;
}


// Dual Sort function

void dualSort(double rainFall[], string months[], const int AMT) 
{

	int startScan, maxIndex, tempID;
	string maxValue;

	for (startScan = 0; startScan < (AMT - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = months[startScan]; 
		tempID = rainFall[startScan];

		for (int index = startScan + 1; index < AMT; index++)
		{ 
		
			if (months[index] > maxValue)
			{

				maxValue = months[index];
				tempID = rainFall[index];
				maxIndex = index;

			}
		
			months[maxIndex] = months[startScan];
			rainFall[maxIndex] = rainFall[startScan];
			months[startScan] = maxValue;
			rainFall[startScan] = tempID;
		}



	}




}



/*
// Function to sort the array

void sortArray(int indicies[], double rainFall[], string months[], int AMT)
{
	int temp;
	bool swap;

	do
	{
		for (int count = 0; count < AMT - 1; count++)
		{
			if (rainFall[indicies[count]] < rainFall[indicies[count + 1]])
				temp = rainFall[count];
			indicies[count] = indicies[count + 1];
			indicies[count] = temp;
			swap = true;
		}

		for (int index = 0; index < AMT; index++)
		{
			cout << "Rainfall for " << months[indicies[index]] << "was" << rainFall[indicies[index]] << endl;
		}
	}
	while (swap);
}
*/
