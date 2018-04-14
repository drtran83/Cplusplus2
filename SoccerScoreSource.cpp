/*
 This is a Soccer Score Program

 The program will have a struct that contains the user entered information for the Players

	Variables within the struct will hold:
		players name
		players number
		points


Will have a function that gets the player's info from the user

A function that will calculate the total points

A function that will show the players info

and a function that gets the highest points and displays:
	which player got the highest points
	and how many points that player scored.




 ------------------------------------------------
 Author: Tam T. Tran
 Created: November 20, 2015
 Rev: 1
 Class: CISS 242 - Professor James Viviano
 ----------------------------------------------------



*/

#include <iostream>
#include <iomanip>

using namespace std;

// Player Struct

struct Player
{
	char name[50];						// holds the players name
	int number;							// players number
	int points;							// points scored

};

const int numPlayers = 12;				// there are 12 players

// function prototype

void getPlayerInfo(Player &p);
void showInfo(Player p);
int getTotalPoints(Player p[], int size);
void showHighest(Player p[], int size);




int main()
{
	Player team[numPlayers];
	int index;

	// Intro

	cout << "Welcome to the Soccer Score Program" << endl;
	cout << "====================================" << endl;


	// Display and get Player's info

	for (index = 0; index < 12; index++)
	{

		cout << "\nPlayer # " << (index + 1) << "\n";
		cout << "--------------\n";
		getPlayerInfo(team[index]);
		cin.get();

	}

	cout.width(50);
	cout.setf(ios::left);
	cout << "\nNAME";										
	cout.width(10);	
	cout << "NUMBER";
	cout.width(10);
	cout << "Points Scored \n";
	for (index = 0; index < 12; index++)
		showInfo(team[index]);
	cout << "TOTAL POINTS: " << getTotalPoints(team, numPlayers) << endl;
	showHighest(team, numPlayers);
}

// Function to get Player

void getPlayerInfo(Player &p)
{

	cout << "Player Name: ";
	cin.getline(p.name, 50);
	cout << "Player's Number: ";
	cin >> p.number;
	cout << "Points Scored: ";
	cin >> p.points;

}

// Function to show info

void showInfo(Player p)
{

	cout << setw(20) << p.name;
	cout << setw(10) << p.number;
	cout << setw(10) << p.points << endl;
}

// Function to get total points

int getTotalPoints(Player p[], int size)
{
	int total = 0;

	for (int index = 0; index < size; index++)

		total += p[index].points;

	return total;

}

// Function to show highest

void showHighest(Player p[], int size)
{
	int highest = 0, highPoints = p[0].points;

	for (int index = 1; index < size; index++)
	{

		if (p[index].points > highPoints)
		{

			highest = index;
			highPoints = p[index].points;
		}

	}

	cout << "The player that scored the most points is: ";
	cout << p[highest].name << endl;

}