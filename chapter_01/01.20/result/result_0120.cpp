//编写程序，求用户指定范围内的数的和，省略设置上界和下界的 if 测试。假定输入数是 7 和 3，按照这个顺序，预测程序运行结果。然后按照给定的数是 7 和 3 运行程序，看结果是否与你预测的相符。如果不相符，反复研究关于 for 和 while 循环的讨论直到弄清楚其中的原因。
//预测运行结果：
// for循环测试条件为假，没有进入循环体，故运行结果为0。
#include <iostream>
int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1, v2;
    std::cin >> v1 >> v2; // read input
    // use smaller number as lower bound for summation
    // and larger number as upper bound
    /*************************
    int lower, upper;
    if (v1 <= v2) {
    lower = v1;
    upper = v2;
    } else {
    lower = v2;
    upper = v1;
    }
    **************************/
    int sum = 0;
    // sum values from lower up to and including upper
    for (int val = v1; val <= v2; ++val)
        sum += val; // sum = sum + val
    std::cout   << "Sum of " << v1
                << " to " << v2
                << " inclusive is "
                << sum << std::endl;
    return 0;
}

Enter two numbers:
Sum of 7 to 3 inclusive is 0

/***********************************************
如果省略设置上界和下界的 if 测试
for (int val = v1; val <= v2; ++val)
        sum += val; // sum = sum + val
循环体 val = 7 ; val < = 3 为假。故跳过for循环。
sum 还是初始值 0
*************************************************/
