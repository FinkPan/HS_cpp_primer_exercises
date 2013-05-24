//编写程序，读入两个具有相同 ISBN 的 Sales_item 对象并产生它们的和。

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1,item2;
    std::cout << "please input the book's ISBN, how much it had been sold,and it's price;" << std::endl;
    while(std::cin >> item1 >> item2)
    {
        if(item1.same_isbn(item2))		//判断两个ISBN是否相同。
             std::cout << item1 + item2 << std::endl;
        else
            std::cout << "Please input the same ISBN" << std::endl;
    }
	
    return 0;
}


please input the book's ISBN, how much it had been sold,and it's price;
0-201-78345-X	8	160	20
Please input the same ISBN
