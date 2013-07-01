#ifndef SALESITEM_H
#define SALESITEM_H

// Definition of Sales_item class and related functions goes here

#include <iostream>
#include <string>

class Sales_item 
{
public:
	void ReadItem();
	void WriteItem();
	//std::string setIBSN();

public:
	Sales_item(): units_sold(0), revenue(0.0) ,price(0.0) { }

private:
	std::string isbn;
	unsigned units_sold;
	double price;
	double revenue;

};	//分号不能漏了啊

#endif