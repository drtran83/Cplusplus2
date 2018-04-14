#include "Payroll.h"

// constructor

Payroll::Payroll()
{
	rate = 0;
	hours = 0;
	totalpay = 0;    
}

// mutator functions

void Payroll::setRate(double r)
{
	rate = r;
}

void Payroll::setHours(double h)
{
	hours = h;
}

void Payroll::setTotalPay(double tp)
{
	totalpay = tp;
}

// accessor functions

double Payroll::getRate() 
{
	return rate;
}

double Payroll::getHours()
{
	return hours;
}

double Payroll::getTotalPay()
{
	return totalpay;
}