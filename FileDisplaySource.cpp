/*

This is a File Display Program

The program will ask user to enter in a filename
	filename will be stored as fileName

The program will then scan the file and display the first 24 lines

Will have the user hit ENTER or any key to continue to display the next 24 lines.


----------------------------------------------------
Author: Tam T. Tran
Created: November 26, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------
*/

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	const int SIZE = 100;
	char fileName[SIZE];													// Holds the name of the file
	string inputLine;														// Holds the input lines
	char lines[100];														// line counter
	ifstream file;															// File Stream Object
		
	cout << "This is a File Display Program" << endl;
	cout << "==============================" << endl;


	// Get the file name from user

	cout << "\nPlease enter in the filename of the file you would like to use" << endl;
	cin >> fileName;

	cout << "\nOpening file......" << endl;

	// This will open the file.

	file.open(fileName, ios::in);

	for (int i = 1; !file.eof(); i++)
	{
		// get the lines and display them

		file.getline(lines, 100);
		cout << i << ": " << lines << endl;


		// stops at every 24th line and has the user hit enter to continue.

		if (i % 24 == 0)
		{

			cout << "Press ENTER to continue." << endl;
			cin.ignore();
			getchar();
		}

		

	}

	// closes file

	file.close();



return 0;


}