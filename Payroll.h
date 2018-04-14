#ifndef PAYROLL_H
#define PAYROLL_H

#include <iostream>

using namespace std;

class Payroll
{

	private:
		double rate, hours, totalpay;				// variables for Rate, Hours, and Total Pay

public:

	Payroll();										// constructor

	void setRate(double);							// sets rate
	void setHours(double);							// sets hours
	void setTotalPay(double);						// sets total pay

	double getRate();								// gets rate
	double getHours();								// gets hours
	double getTotalPay();							// gets total pay

};

#endif