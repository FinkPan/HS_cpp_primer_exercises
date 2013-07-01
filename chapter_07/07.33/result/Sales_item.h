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
	void AddItem();

public:
	Sales_item(): units_sold(0), revenue(0.0) ,price(0.0), avg_price(0.0) { }

private:
	std::string isbn;
	unsigned units_sold;
	double price;
	double revenue;
	double avg_price;

};	//分号不能漏了啊

#endif