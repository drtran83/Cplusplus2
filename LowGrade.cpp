/*
This Program will drop the lowest grade.

Display: What are your 6 (six) scores.
	Take in the 6 scores

Calculate scores

Display lowest grade

Display average with lowest dropped

There are going to be three functions

getScore which will get the score

getAverage which will get the average and drop the lowest 

getLowest will get the lowest score

----------------------------------------------------
Author: Tam T. Tran
Created: September 24, 2015
Rev: 1
Class: CISS 241 - Professor James Viviano
----------------------------------------------------



*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
		
void getScore(double&, double&, double&, double&, double&, double&);																											// Gets Score
void calcAverage(double score1, double score2, double score3, double score4, double score5, double score6);								// Gets Average
double findLowest(double score1, double score2, double score3, double score4, double score5, double score6);				// Gets Lowest

int main()
{
	// Variables
	double score1, score2, score3, score4, score5, score6; 

	// Talk to the user

	cout << "This program is designed to get the scores, drop the lowest, and average them. \n" << endl;
	cout << "Please enter in six (6) scores that are between 0 and 100" << endl;

	// Getting scores

	getScore(score1, score2, score3, score4, score5, score6);
	
	// Shows lowest score
	findLowest(score1, score2, score3, score4, score5, score6);
	
	// Showing average and dropping lowest
	calcAverage(score1, score2, score3, score4, score5, score6);
	return 0;


	
}

// This function allows for the getting of the scores

void getScore(double& score1, double& score2, double& score3, double& score4, double& score5, double& score6)
{

	// Get 1st Score
	cout << "\nEnter in your First score \n" << endl;
	cin >> score1;
	if (score1 < 0 || score1 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score1;
	}

	// Get 2nd Score
	cout << "\nEnter in your Second score \n" << endl;
	cin >> score2;
	if (score2 < 0 || score2 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score2;
	}

	// Get 3rd Score
	cout << "\nEnter in your Third score \n" << endl;
	cin >> score3;

	if (score3 < 0 || score3 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score3;
	}

	// Get 4th Score
	cout << "\nEnter in your Fourth score \n" << endl;
	cin >> score4;
	
	if (score4 < 0 || score4 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score4;
	}

	// Get 5th score
	cout << "\nEnter in your Fifth score \n" << endl;
	cin >> score5;

	if (score5 < 0 || score5 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score5;
	}

	// Get 6th Score
	cout << "\nEnter in your Sixth score \n" << endl;
	cin >> score6;

	if (score6 < 0 || score6 > 100)
	{
		cout << "\nSorry you have entered in the wrong score, please enter a score from 0 to 100\n" << endl;
		cin >> score6;
	}



}

// This function should get the average of the scores.

void calcAverage(double score1, double score2, double score3, double score4, double score5, double score6)
{
	double average;
	double lowest = findLowest(score1, score2, score3, score4, score5, score6);
	average = ((score1 + score2 + score3 + score4 + score5 + score6) - lowest) / 5;

	cout << "\nYour lowest score is: " << lowest << endl;

	cout << fixed << showpoint << setprecision(2);
	cout << "\nThe average of all the scores with the lowest dropped is: " << average << endl;

}

// This funcion should find the lowest score.

double findLowest(double score1, double score2, double score3, double score4, double score5, double score6)
{
	double lowest = score1;

	if (score2 < lowest)
	{
		lowest = score2;
	}
	if (score3 < lowest)
	{
		lowest = score3;
	}

	if (score4 < lowest)
	{	
		lowest = score4;
	}

	if (score5 < lowest)
	{
		lowest = score5;
	}
	if (score6 < lowest)
	{
		lowest = score6;
	}
	return lowest;

}







