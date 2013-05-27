//编写程序，要求用户输入两个数——底数（base）和指数（exponent），输出底数的指数次方的结果。
#include <iostream>
#include <cmath>
int main()
{
    double dbase=0;
    double dexponent=0;
    char quit;
    while(1)
    {
		std::cout  << "please input the base and the exponent:" << std::endl;
		std::cin >> dbase >> dexponent;
		std::cout << dbase << " ^ " << dexponent << " = " << pow(dbase,dexponent) << std::endl;
		std::cout << "push any key to be continue,and \"q\" or \"Q\" to quit." << std::endl;
		std::cin >> quit;
		if((quit == 'q' ) || (quit == 'Q'))	//为while设置退出条件：当用户输入 q 或 Q 时退出程序
			break;
		std::cin.ignore(256,'\n');		//忽略256个字符，直到遇见回车符，作用是清空cin输入流。
    }


  return 0;
}
please input the base and the exponent:
// 2
//10
2 ^ 10 = 1024
push any key to be continue,and "q" or "Q" to quit.
//f
please input the base and the exponent:
//2 6
2 ^ 6 = 64
push any key to be continue,and "q" or "Q" to quit.
//q
