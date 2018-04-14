/*
This is a Joke and Punchline Display program.

The program will display contents of the Joke file with a function 

Pause for effect....

The program will have a function that will search and only display the last part of the punchline file.

end.

----------------------------------------------------
Author: Tam T. Tran
Created: November 28, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>

using namespace std;

// function prototypes

void displayall(ifstream &);					// function to display all of the joke file.
void displaylast(ifstream &);					// function to display the last part of the punchline file.

int main()
{

	ifstream joke;								// joke file
	ifstream punchline;							// punchline file

	// intro

	cout << "Check this Joke out!!" << endl;
	cout << "======================\n\n" << endl;

	// opens the joke file

	joke.open("joke.txt", ios::in);

	// joke file validation

	if (joke.fail())
	{
		cout << "Error opening the file, please make sure the file is correct location" << endl;
	}

	// Displays contents of joke file

	displayall(joke);

	// closes joke file

	joke.close();

	// "PAUSE" for effect! LOL

	system("PAUSE");

	cout << "\n\n";

	// opens the punchline file

	punchline.open("punchline.txt", ios::in);

	// punchline file validation

	if (punchline.fail())
	{
		cout << "Error opening the file, please make sure the file is in the correct location" << endl;
	}


	// Displays contents of punchline file

	displaylast(punchline);


	// closes punchline
	punchline.close();



	return 0;
}

// Function to display all in the joke file

void displayall(ifstream &file)

{
	char ch;

	file.get(ch);

	while (!file.fail())
	{
		cout << ch; file.get(ch);
	}

	cout << "\n\n";

}

// Function to display the punchline file

void displaylast(ifstream &file)
{
	const int LENGTH = 100;
	char input[LENGTH];

	file.getline(input, LENGTH, '\n');

	while (!file.eof())
	{
		file.getline(input, LENGTH, '\n');
	}

	cout << input << "\n\n\n";


}