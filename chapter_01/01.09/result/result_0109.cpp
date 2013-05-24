/*  下列循环做什么？sum 的最终值是多少?
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;

答：该循环为-100 + -99 +...+ -1 + 0 + 1 + ...+ 99 +100  sum的最终值为0；
*/
#include <iostream>
int main()
{
    int sum = 0;
    for (int i = -100; i <= 100; ++i)
    sum += i;
    std::cout << "sum= " << sum << std::endl;
    return 0;
}
sum= 0	
