//用适当的 using 声明，而不用 ，访问标准库中名字的方法，重新编写第 2.3 节的程序，计算一给定数的给定次幂的结果。
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double dbase=0;
    double dexponent=0;
    char quit;
    while(1)
    {
		cout  << "please input the base and the exponent:" << endl;
		cin >> dbase >> dexponent;
		cout << dbase << " ^ " << dexponent << " = " << pow(dbase,dexponent) << endl;
		cout << "push any key to be continue,and \"q\" or \"Q\" to quit." << endl;
		cin >> quit;
		if((quit == 'q' ) || (quit == 'Q'))	//为while设置退出条件：当用户输入 q 或 Q 时退出程序
			break;
		cin.ignore(256,'\n');		//忽略256个字符，直到遇见回车符，作用是清空cin输入流。
    }


  return 0;
}
