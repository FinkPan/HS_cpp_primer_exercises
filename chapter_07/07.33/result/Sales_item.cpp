#include <iostream>
#include <string>
#include "Sales_item.h"

void Sales_item::ReadItem()
{
	std::cout << "input the ISBN: " << std::endl;
	std::cin >> isbn;
	std::cout << "input the units_sold: " << std::endl;
	std::cin >> units_sold;
	std::cout << "input the price: " << std::endl;
	std::cin >> price;
	if (std::cin && (units_sold != 0) && (price != 0) )
	{
		revenue = units_sold * price;
		avg_price = price;
	}
	else
		Sales_item();
}

void Sales_item::WriteItem()
{
	std::cout << "ISBN: " << isbn << "\n";
	std::cout << "units_sold: " << units_sold << "\n";
	std::cout << "revenue: " << revenue << "\n";
	std::cout << "avg_price: " << avg_price << "\n";
}

void Sales_item::AddItem()
{
	unsigned input_units_sold = 0;
	double input_price = 0.0;
	std::cout << "ISBN: " << isbn << std::endl;

	std::cout << "input the units_sold: " << std::endl;
	std::cin >> input_units_sold;
	if (input_units_sold)
		units_sold += input_units_sold;

	std::cout << "input the price: " << std::endl;
	std::cin >>input_price;
	if (std::cin && (units_sold != 0) && (price != 0) )
	{
		revenue += input_units_sold * input_price;
		avg_price = revenue / units_sold;
	}
	else
		Sales_item();
}

int main() 
{
	Sales_item book1;
	book1.ReadItem();
	//book1.WriteItem();
	char cq = NULL;
	 while (1)
	{
		std::cout << "pass anykey add item. (pass 'q' or 'Q' for quit): \n" ;
		std::cin >> cq;
		if ((cq == 'q') || (cq =='Q'))
			break;
		else
		{
			std::cout << "add item: \n";
			book1.AddItem();
		}
	}
	book1.WriteItem();
	return 0; 
} 