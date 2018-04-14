#include "CashRegister.h"

// constructor # 1

CashRegister:: CashRegister()
{
	double total = 0;
	double subtotal = 0;
	double taxes = 0;

}

//constructor #2

CashRegister::CashRegister(double st, double t, double tx)
{

	subtotal = st;
	total = t;
	taxes = tx;

}

// mutator funcitons

void CashRegister::setSubtotal(double st)
{
	subtotal = st;
}

void CashRegister::setTotal(double t)
{
	total = t;
}

void CashRegister::setTax(double tx)
{

	taxes = tx;
}

// accessor functions

double CashRegister :: getSubtotal()
{
	return subtotal;
}

double CashRegister::getTotal()
{
	return total;
}

double CashRegister::getTax()
{
	return taxes;
}
