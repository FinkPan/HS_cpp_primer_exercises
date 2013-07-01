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
		revenue = units_sold * price;
	else
		Sales_item();
}

void Sales_item::WriteItem()
{
	std::cout << "ISBN: " << isbn << "\n";
	std::cout << "units_sold: " << units_sold << "\n";
	std::cout << "revenue: " << revenue << "\n";

}

int main() 
{
	Sales_item book1;
	book1.ReadItem();
	book1.WriteItem();

	return 0; 
} 