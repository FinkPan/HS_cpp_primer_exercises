//用 while 循环编程，输出 10 到 0 递减的自然数。然后用 for 循环重写该程序。

#include <iostream>
using namespace std;
int main()
{
    int i = 10;
    cout << "while loop: ";
    while(i >= 0)   //while loop;
    {
        cout << i << " ";
        i--;
    }
    cout << endl;

    // for loop: reinit i=10;
    cout << "for loop: ";
    for(i = 10; i >= 0; i--)
         cout << i << " ";
    cout << endl;
    return 0;
}
while loop: 10 9 8 7 6 5 4 3 2 1 0 
for loop: 10 9 8 7 6 5 4 3 2 1 0 
