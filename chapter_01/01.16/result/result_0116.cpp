//编写程序，输出用户输入的两个数中的较大者。
#include <iostream>
using namespace std;
int main()
{
    int v1,v2;
    cout << "please input two integers, I will pick out the bigger one." << endl;
    cin >> v1 >> v2;
    cout << "here you are inputs: " << v1 << " and " << v2 <<endl; 
    if(v1 == v2)    //判断用户输入的两个数是否相同；
        cout << "you input the same integer. they both are " << v1 << endl;
    else
        cout << "here's the bigger integer: " << ((v1 > v2) ? v1 : v2) << endl;
    return 0;
}


please input two integers, I will pick out the bigger one.
here you are inputs: 8 and 8
you input the same integer. they both are 8
please input two integers, I will pick out the bigger one.
here you are inputs: 96 and 51
here's the bigger integer: 96
please input two integers, I will pick out the bigger one.
here you are inputs: 23 and 88
here's the bigger integer: 88
