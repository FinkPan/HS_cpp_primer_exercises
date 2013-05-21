//用 for 循环编程，求从 50 到 100 的所有自然数的和。然后用 while 循环重写该程序。

#include <iostream>
using namespace std;
int main()
{
    int i = 50;
    int sum = 0;
    // for循环
    for(i; i <= 100; i++)
        sum += i;
    cout << "for's sum = " << sum << endl;

    //while 循环 ,重置i 和 sum
    i = 50;
    sum = 0;
    while(i<=100)   //当i<=100时为真，程序进入循环体；
    {
        sum += i;
        i++;    //第一次忘记加这个增量，导致程序进入死循环。
    }

    cout << "while' sum = " << sum <<endl;

    return 0;
}
for's sum = 3825
while' sum = 3825
