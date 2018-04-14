#include "Circle.h";



// Function Definitions


Circle::Circle()
{
	radius = 0.0;
	pi = 3.14159;

}

// overload constructor

Circle::Circle(double circleRadius) {

	radius = circleRadius;

}

double Circle::getRadius()
{
	return radius;
}

double Circle::getArea()
{
	double area = pi * (radius * radius);
	return area;
}

double Circle::getDiameter()
{
	double diameter = radius * 2;
	return diameter;
}

double Circle::getCircumference()
{
	double circumference = pi *(radius * 2);
	return circumference;
}


// Set radius

void Circle::setRadius(double raidus)
{
	if (raidus >= 0)
		radius = raidus;
	else
	{
		cout << "Invalid radius \n";
		exit(EXIT_FAILURE);
	}
}
