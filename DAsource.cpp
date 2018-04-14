/*

This program will dyanamically allocate an array large enough to hold a user's
defined number of test scores.  Once scores are entered, the program will sort them in ascending order.

Use function void getGrades (double* score, int size) to get the grades

Use function void displayGrades (double* score, in size, double avg) to display grades

use function void sort (double*, int size) to sort

use function double average(double* score, int numScores) to get the average.

------------------------------------------------------------------------------------

Ask user how many grades they would like to input
	get input
		ensure no negatives inputted

Ask user for the grades they wwant to input
	get grades
		ensure no negatives inputted.

Use function to sort the grades

Use function to get the average

show the sorted grades like this:

Score

67.40
67.80
77.60
99.60

Average Score: 78.10


----------------------------------------------------
Author: Tam T. Tran
Created: November 6, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------

*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes

void getGrades(double* scores,int numScores, int count);							// gets the grades
void displayGrades(double* scores, int numScores, int count);						// displays grades
void sort(double* scores, int numScores);											// sorts grades in ascending order
double average(double* scores, int numScores, double avg);							//to get the average



int main()

{

	double* scores;
	int numScores = 0;
	double avg = 0;
	int count = 0;

	cout << "This program will get your scores, sort and display them for you" << endl;
	cout << "=================================================================" << endl;


	// Get scores

	cout << "\nHow many test scores would you like to enter? " << endl;
	cin >> numScores;
	if (numScores <= 0)
	{
		cout << "\nYou have entered a wrong number for scores, enter in a positive number greater than 0" << endl;  // does not allow negative #
		cin >> numScores;
	}

	// new array

	scores = new double[numScores];


	getGrades(scores, numScores, count);						// calls get grades function
			
	displayGrades(scores, numScores, count);					// calls display grades function

	average(scores, numScores, avg);							// calls average function

	

	/*int numScores;						// holds number of test scores
	int count;								// counter
		
									

	cout << "\nHow many test scores would you like to enter? " << endl;
	cin >> numScores;
	if (numScores <= 0)
	{
		cout << "\nYou have entered a wrong number for scores, enter in a positive number greater than 0" << endl;
		cin >> numScores;
	}

	scores = new double[numScores];

	// Get the test scores

	cout << "\nEnter your test scores \n";
	for (count = 0; count < numScores; count++)
	{
		cout << "Test Score " << (count + 1) << " : ";
		cin >> scores[count];

		if (scores[count] <= 0)
		{
			cout << "\nYou have entered in a wrong score value, enter in a positive score greater than 0" << endl;
			cin >> scores[count];
		}
	}

	// calculates the total

	for (count = 0; count < numScores; count++)
	{
		total += scores[count];
	}

	// calculates the average

	average = total / numScores;

	sort(scores, numScores);


	cout << fixed << showpoint << setprecision(2) << endl;

	cout << "Score: " << endl;

	for (count = 0; count < numScores; count++)
	{ 
		cout << (count + 1) << scores[count] << endl;
	}

	
	cout << "Average Score: " << average << endl;
	*/


	// Frees up the memory for you

	delete[] scores;
	scores = 0;

	return 0;

}


// Function that gets the grades

void getGrades(double* scores, int numScores, int count)
{

	//scores = new double[numScores];		/// this did not belong here....

	// Get the test scores

	cout << "\nEnter your test scores \n";
	for (count = 0; count < numScores; count++)
	{
		cout << "Test Score " << (count + 1) << " : ";
		cin >> scores[count];

		if (scores[count] <= 0)
		{
			cout << "\nYou have entered in a wrong score value, enter in a positive score greater than 0" << endl;
			cin >> scores[count];
		}
	}
}


// Function to display the Grades

void displayGrades(double* scores, int numScores, int count)
{

	sort(scores, numScores);									// calls the function to sort the scores.

	cout << fixed << showpoint << setprecision(2) << endl;

	cout << "\nScore: " << endl;

	for (count = 0; count < numScores; count++)
	{
		cout << (count + 1) << " " << scores[count] << endl;
	}

}

// Function that gets the average

double average(double* scores, int numScores, double avg)
{
	double total = 0.0;
	int count;

	for (count = 0; count < numScores; count++)
	{
		total += scores[count];
	}

	// calculates the average

	avg = total / numScores;

	cout << "\nAverage Score: " << avg << endl;

	return avg;
}



// Function that sorts the scores

void sort(double scores[], int numScores)
{
	bool exchanges;

	do 
	{
		exchanges = false;

		for (int i = 0; i < numScores - 1; i++)
		{
			if (scores[i] > scores[i + 1])
			{
				double temp = scores[i];
				scores[i] = scores[i + 1];
				scores[i + 1] = temp;
				exchanges = true;
			}

		}

	} while (exchanges);

}

