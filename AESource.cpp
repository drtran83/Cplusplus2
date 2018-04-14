/*

This program is an Array Expander

The program will have an array of integers

Wth a function that has two parameters
	integer array
	array's size

	Function will create
		a new array that is 2x the size of the arguments array
		will copy the contents of the argument array into a new array
		must return a pointer into the new array

new array will initialize unused elements with 0

must have the following functions

int* expandArray (int [], int)

void showArray (int[], int)

----------------------------------------------------
Author: Tam T. Tran
Created: November 6, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>

using namespace std;

// funciton prototypes

int* expandArray(int[], int size);
void showArray(int[], int size);

int main()
{
	int array[] = { 1,2,3,4,5 };					// first array
	int size = 5;									// first array size

	// calls the show function

	showArray(array, size);


	return 0;
}

int* expandArray(int array[], int size)
{
	int *expandedArray = new int[size * 2];			// this will double the first array

	//move elements from original array into Expanded Array
	//rest of elements are initialized into new array to 0

	for (int i = 0; i < size * 2; i++)
	{
		if (i < size)
		{
			expandedArray[i] = array[i];

		}
		else
		{
			expandedArray[i] = 0;
		}
	}

	return expandedArray;
}

void showArray(int array[], int size)
{

	// pointer for array

	int *arryPtr = expandArray(array, size);

	// displays the array

	for (int i = 0; i < size * 2; i++)
	{
		cout << arryPtr[i] << endl;
	}



}
