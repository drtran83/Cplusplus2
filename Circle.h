

#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>

using namespace std;

class Circle												// circle class
{

	private: 

	double radius;											// holds radius 
	double pi;												// holds pi value
		

	public:

	Circle();												// constructor

	Circle(double);											// overload constructor

	
	void setRadius(double);

	double Circle::getRadius();								// gets radius
	double Circle::getArea();								// gets area
	double Circle::getDiameter();							// gets diameter
	double Circle::getCircumference();						// gets circumference

};

#endif