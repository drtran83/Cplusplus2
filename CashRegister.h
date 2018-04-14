#pragma once
#ifndef CASHREGISTER_H
#define CASHREGISTER_H


#include <iostream>
#include "InventoryItem.h"

using namespace std;

class CashRegister : public InventoryItem
{

private:

	// Variables

	double total;
	double taxes;
	double subtotal;


public:

	CashRegister();

	CashRegister(double, double, double);

	void setSubtotal(double);					// set subtotals

	void setTotal(double);						// set totals

	void setTax(double);						// set taxes

	double getSubtotal();

	double getTotal();

	double getTax();					


};

#endif