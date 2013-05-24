//编写程序，要求用户输入一组数。输出信息说明其中有多少个负数。

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    vector<int>::iterator prt;
    int v2;
    int count = 0;
    cout << "please input same integers, not integer for end:" << endl;
    while(cin >> v2)
    {
        v1.push_back(v2);
    }
    for(prt = v1.begin(); prt != v1.end(); ++prt)
    {
        cout << "you numbers: " << *prt << endl;
        if(*prt < 0)
            count++;
    }
    cout << "There are " << count << "negative number" << endl;

}
please input same integers, not integer for end:
you numbers: -6
you numbers: 96
you numbers: -54
you numbers: 52
you numbers: 65
you numbers: -54
you numbers: 54
you numbers: 658
you numbers: -14
you numbers: -645
you numbers: -68
you numbers: 649
you numbers: 953
you numbers: -475
There are 7negative number
