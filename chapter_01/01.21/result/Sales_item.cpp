/****************************************
本书配套网站的第一章的代码目录下有 Sales_item.h
源文件。复制该文件到你的工作目录。编写程序,循环遍
历一组书的销售交易,读入每笔交易并将交易写至标准输出

Confused: What's the meaning of "循环遍历一组书的销售交易"
****************************************/

#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item myBookSales;
    std::cout << "please input the book's ISBN, how much it had been sold,and it's price;" << std::endl;
   while(std::cin >> myBookSales)
   {
        std::cout << myBookSales << std::endl;

   }
    return 0;
}
please input the book's ISBN, how much it had been sold,and it's price;
0-201-78345-X	3	60	20
3-359-47542-m	1	88.3	88.3
2-454-45494-n	6	212.4	35.4
