/*
This program will display employee's information using classes.



----------------------------------------------------
Author: Tam T. Tran
Created: December 5, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include "Employee.h"							// access header file

using namespace std;



int main()
{
	const int NUM_WORKERS = 3;						// const for the number of workers

	Employee emp[NUM_WORKERS] = { Employee("Susan Meyers", 47889, "Accounting", "Vice President"),
								Employee("Mark Jones", 39119, "IT", "Programmer"),
								Employee("Joy Rogers", 81774, "Manufacturing", "Engineer") };

	cout << "This program will display the employee names, department, and position.\n" << endl;
	cout << "=========================================================================\n" << endl;

	cout << "Name: \t\t\tId: \t\tDepartment: \t\tPosition:" << endl;
	cout << "--------------------------------------------------------------------------" << endl;

	for (int i = 0; i < NUM_WORKERS; i++)
	{

		cout << "\n" << emp[i].getName() << "\t\t";				// displays name
		cout << emp[i].getId() << "\t\t";						// displays id
		cout << emp[i].getDepartment() << "\t\t";				// displays department
		cout << emp[i].getPosition() <<"\t" << endl;			// displays position

	}

	cout << endl;


	return 0;
}