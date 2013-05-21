//编写程序,提示用户输入两个数并将这两个数范围内的每个数写到标准输出。
#include <iostream>
int main()
{
    int v1=0, v2=0;
    int mix=0, max=0;
    std::cout << "please input two integer of the range." << std::endl;
    std::cin >> v1 >> v2;
    while(v1 == v2)     //如果用户输入两个相同的数字，提示并让用户重新输入两个整数；
    {
        std::cout << "please input two difference integer." << std::endl;
        std::cin >> v1 >> v2;
    }
    std::cout << "here are your numbers: " << v1 << " and " << v2 << std::endl;
    if(v1 < v2)
    {
        mix = v1;
        max = v2;
    }
    else
    {
        mix = v2;
        max = v1;
    }
    for(mix; mix <= max; ++mix)
        std::cout << mix << std::endl;
    return 0; 
}

please input two integer of the range.
please input two difference integer.
here are your numbers: 5 and 16
5
6
7
8
9
10
11
12
13
14
15
16
please input two integer of the range.
here are your numbers: 23 and 4
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
