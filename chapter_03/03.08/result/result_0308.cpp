//编一个程序，从标准输入读取多个 string 对象，把它们连接起来存放到一个更大的 string 对象中。并输出连接后的 string 对象。接着，改写程序，将连接后相邻 string 对象以空格隔开。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	int nCount;
	cout << "how many strings : \n";
	cin >> nCount;
	for(int i = 0; i < nCount; i++)
	{
		cin >> s1;
		s2 += s1;			//string 连接
	}
	cout << "you strings: " << s2 <<  endl;
	return 0;
}

//改写程序，将连接后相邻 string 对象以空格隔开。

int main()
{
	string s1,s2;
	int nCount;
	cout << "how many strings : \n";
	cin >> nCount;
	for(int i = 0; i < nCount; i++)
	{
		cin >> s1;
		s2 = s2  + s1 + " "; 		//将连接后相邻 string 对象以空格隔开。
	}
	cout << "you strings: " << s2 <<  endl;
	return 0;
}