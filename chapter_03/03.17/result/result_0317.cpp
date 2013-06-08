//重做 3.3.2 节 的习题，用迭代器而不是下标操作来访问 vector 中的元素。

//用迭代器重做03.13习题后部分头尾相加

#include "stdafx.h"		//该头文件为Visual Studio2010编译器的.
#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	
	vector<int> ivec;
	int n;
	cout << "input a group of integer: (any letters for end)" << endl;
	while(cin >> n)
	{
		ivec.push_back(n);
	}
	vector<int>::iterator re_iter = ivec.end()-1;	//指向末尾元素
	vector<int>::iterator iter = ivec.begin();		//指向第一个元素
	vector<int>::iterator mid = ivec.begin() + ivec.size()/2;	// 直接指向vector中间值.这是由于iterator 支持迭代器算术操作 iter+n 和 inter-n 
	if ((ivec.size() % 2 != 0))	//输入数为奇数
	{
		for (iter; iter != mid; ++iter,--re_iter)	//当iter=mid为中间数时循环测试失败,包含逗号运算"++iter,--re_iter" 逗号运算必须为同一种类型
		{
			cout << *iter + *re_iter << endl;	//头尾两个相加
		}
		cout << "the middle integer " << *iter << " has no element to be add." << endl;
	}
	else	//输入个数为偶数
	{
		for (iter; iter != mid; ++iter,--re_iter)	//当iter=mid时循环测试失败
		{
			cout << *iter + *re_iter << endl;	//头尾两个相加
		}

	}

	system("pause");	//暂停屏幕,方便查看结果.
	return 0;
}