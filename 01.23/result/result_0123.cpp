//编写程序，读入几个具有相同 ISBN 的交易，输出所有读入交易的和。
#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item trans,itemTotal;
    std::cout << "please input the book's ISBN, how much it had been sold,and it's price;" << std::endl;
    std::cin >> itemTotal;
    while (std::cin >> trans)
    {
        if (itemTotal.same_isbn(trans))
            itemTotal = itemTotal + trans;
        else
            std::cout << "Please input the books that has the same ISBN." << std::endl;

     }

	std::cout << itemTotal << std::endl;
    return 0;
}

please input the book's ISBN, how much it had been sold,and it's price;
0-5-8754-x 2 30.00
0-5-8754-x 3 29.89
0-5-8754-n 10 20.00
Please input the books that has the same ISBN.
q
q
0-5-8754-x	5	149.67	29.934
