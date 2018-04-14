/*
This program will display employee's information using classes.



----------------------------------------------------
Author: Tam T. Tran
Created: December 5, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>
#include <string>

using namespace std;

class Employee {

private:

	string empName, department, position;			// string for employee's name, department, and position
	int idNum;										// int for id number

public:

	
	void setName(string name)							// setting name
	{
		empName = name;
	}

	void setIdNum(int id)								// setting id
	{
		idNum = id;
	}

	void setPos(string pos)								// setting position
	{
		position = pos;
	}

	void setDept(string dept)							// setting department
	{
		department = dept;
	}

	Employee(string name, int id, string dept, string pos)		// constructor
	{
		empName = " ";
		idNum = 0;
		department = " ";
		position = " ";

		Employee::setName(name);
		Employee::setIdNum(id);
		Employee::setDept(dept);
		Employee::setPos(pos);

	} 

	string Employee::getName()							// get name
	{
		return empName;
	}

	string Employee::getDepartment()					// get department
	{
		return department;
	}

	string Employee::getPosition()						// get position
	{
		return position;
	}

	int Employee::getId()								// get id
	{
		return idNum;
	}


};






#endif