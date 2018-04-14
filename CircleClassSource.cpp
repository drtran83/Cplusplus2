/*

This is a circle class program.



----------------------------------------------------
Author: Tam T. Tran
Created: December 2, 2015
Rev: 1
Class: CISS 242 - Professor James Viviano
----------------------------------------------------
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Circle.h"

using namespace std;





int main()
{
	Circle circle;				// instance of circle class as object
	Circle circle2;				// 2nd object
	double circleRadius;		// holds the circle's radius


	// intro

	cout << "This program will calculate and display the area, circumference, and diameter of a circle" << endl;
	cout << "============================================================================================" << endl;

	cout << "Enter in the radius of your circle: ";
	cin >> circleRadius;
	circle.setRadius(circleRadius);
	circle2.setRadius(circleRadius);

	// Display circle information

		
		cout << setprecision(2) << fixed;
		cout << "\nHere is the circle's data: \n" << endl;
		cout << "The circle's Area is: " << circle.getArea() << endl;
		cout << "The circle's Diameter is: " << circle.getDiameter() << endl;
		cout << "The circle's Circumference is: " << circle.getCircumference() << endl;

	// Display 2nd circle information

		cout << setprecision(2) << fixed;
		cout << "\nHere is the 2nd circle's data: \n" << endl;
		cout << "The circle's Area is: " << circle2.getArea() << endl;
		cout << "The circle's Diameter is: " << circle2.getDiameter() << endl;
		cout << "The circle's Circumference is: " << circle2.getCircumference() << endl;





		return 0;

}