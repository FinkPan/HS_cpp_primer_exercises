//使用转义字符编写一段程序，输出 2M，然后换行。修改程序，输出 2，跟着一个制表符，然后是 M，最后是换行符。

#include <iostream>
int main()
{
  std::cout << "2M\n";
  std::cout << "2\tM\n";
}
 
2M
2	M
