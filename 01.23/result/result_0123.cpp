//编写程序，读入几个具有相同 ISBN 的交易，输出所有读入交易的和。
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1,itemTemp,itemTotal;
    std::cout << "please input the book's ISBN, how much it had been sold,and it's price;" << std::endl;
    std::cin >> item1;
    itemTemp = item1;	//itemTemp 用来标记ISBN是否相同。
    while(itemTemp.same_isbn(item1))
    {
			 itemTotal += item1;
			 std::cin >> item1;
    }
	std::cout << itemTotal << std::endl;
    return 0;
}

please input the book's ISBN, how much it had been sold,and it's price;
0-201-78345-X 2 25.00
0-201-78345-X 6 25.00
0-201-78345-X 1 25.6 
0-201-78345-X 10 24.86
0-201-78345-b 2 36.2 

	19	474.2	24.9579
